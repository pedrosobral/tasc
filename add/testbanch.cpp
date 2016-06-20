// testbanch implementation
#include "testbanch.h"

void testbanch::process() {
  wait(15, SC_NS);

  // case 1
  a = "00";
  b = "00";
  wait(15, SC_NS);
  print();

  // case 2
  a = "11";
  b = "11";
  wait(15, SC_NS);
  print();

  // case 3
  a = "01";
  b = "10";
  wait(15, SC_NS);
  print();

  // case 4
  a = "01";
  b = "01";
  wait(15, SC_NS);
  print();

  sc_stop();
}

void testbanch::print() {
  std::cout << " ** TESTE ADD " << test_count++ << " ** "<< std::endl;
  std::cout << "A:" << a.read() << std::endl;
  std::cout << "B:" << b.read() << std::endl;
  std::cout << "SUM:" << sum.read()[1] << sum.read()[0] << std::endl;
  std::cout << "CARRY:" << sum.read()[2] << std::endl;
}
