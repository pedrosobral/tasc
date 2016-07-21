// testbanch implementation
#include "testbanch.h"

void testbanch::process() {
  wait(15, SC_NS);

  // case 1
  in = SC_LOGIC_0;
  wait(15, SC_NS);
  print();

  sc_stop();
}

void testbanch::print() {
  std::cout << out.read() << std::endl;
}
