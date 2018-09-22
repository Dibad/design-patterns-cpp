#include "context.h"
#include "nonterminalExpression.h"
#include "terminalExpression.h"

#include <iostream>

int main() {
  TerminalExpression *X = new TerminalExpression("X");
  TerminalExpression *Y = new TerminalExpression("Y");
  TerminalExpression *Z = new TerminalExpression("Z");

  NonterminalExpression *XandY = new NonterminalExpression(X, Y);
  NonterminalExpression *XandYandZ = new NonterminalExpression(XandY, Z);

  Context context;
  context.assign("X", true);
  context.assign("Y", false);
  context.assign("Z", true);

  std::cout << "Expression: (X && Y) && Z" << std::endl;
  std::cout << std::boolalpha << "(" << context.get("X") << " && "
            << context.get("Y") << ") && " << context.get("Z") << " = "
            << XandYandZ->interpret(context) << std::endl;

  return 0;
}
