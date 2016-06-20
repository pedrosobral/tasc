// testbanch implementation
#include "testbanch.h"

void testbanch::process() {
  wait(15, SC_NS);

  a = "11";
  b = "00";

  // case 1 add
  selection = "00";
  wait(15, SC_NS);
  print();

  // case 2 sub
  selection = "01";
  wait(15, SC_NS);
  print();

  // case 3 and
  selection = "10";
  wait(15, SC_NS);
  print();

  // case 3 or
  selection = "11";
  wait(15, SC_NS);
  print();

  sc_stop();
}

void testbanch::print() {
  std::cout << " ** TESTE ALU " << test_count++ << " ** "<< std::endl;
  std::cout << "A: " << a.read() << std::endl;
  std::cout << "B: " << b.read() << std::endl;
  std::cout << "SEL: " << selection.read() << std::endl;
  std::cout << "OUT: " << out.read() << std::endl;
}
