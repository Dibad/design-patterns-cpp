#include <memory>

#include "proxy.h"
#include "subject.h"

int main() {
  std::unique_ptr<Subject> s(new Proxy);
  s->operation();

  return 0;
}
