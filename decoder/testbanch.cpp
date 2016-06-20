// testbanch implementation
#include "testbanch.h"

void testbanch::process() {
  wait(15, SC_NS);

  // case 1
  input = "00";
  wait(15, SC_NS);
  assert(output.read() == "0001");
  print();

  // case 2
  input = "01";
  wait(15, SC_NS);
  assert(output.read() == "0010");
  print();

  // case 3
  input = "10";
  wait(15, SC_NS);
  assert(output.read() == "0100");
  print();

  // case 4
  input = "11";
  wait(15, SC_NS);
  assert(output.read() == "1000");
  print();

  sc_stop();
}

void testbanch::print() {
  std::cout << " ** TESTE DECODER" << test_count++ << " ** "<< std::endl;
  std::cout << " IN :" << input.read() << std::endl;
  std::cout << " OUT:" << output.read() << std::endl;
}
