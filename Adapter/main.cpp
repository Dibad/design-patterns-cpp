#include "classAdapter.h"
#include "objectAdapter.h"
#include "target.h"

#include <memory>

int main() {
  std::unique_ptr<Target> t(new classAdapter);
  t->request();

  t.reset(new objectAdapter);
  t->request();

  return 0;
}
