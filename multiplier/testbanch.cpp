// testbanch implementation
#include "testbanch.h"

void testbanch::process() {
  wait(15, SC_NS);

  a = "11";
  b = "11";
  wait(15, SC_NS);
  print();

  a = "01";
  b = "00";
  wait(15, SC_NS);
  print();

  a = "10";
  b = "10";
  wait(15, SC_NS);
  print();

  a = "11";
  b = " 10";
  wait(15, SC_NS);
  print();

  sc_stop();
}

void testbanch::print() {
  std::cout << " ** TESTE MULTIPLIER " << test_count++ << " ** "<< std::endl;
  std::cout << "A: " << a.read() << std::endl;
  std::cout << "B: " << b.read() << std::endl;
  std::cout << "MULT: " << out.read() << std::endl;
}
