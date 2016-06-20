// testbanch implementation
#include "testbanch.h"

void testbanch::process() {
  wait(15, SC_NS);

  in0 = "001";
  in1 = "010";
  in2 = "101";
  in3 = "111";

  // case 1
  selection = "00";
  wait(15, SC_NS);
  print();

  selection = "01";
  wait(15, SC_NS);
  print();

  selection = "10";
  wait(15, SC_NS);
  print();

  selection = "11";
  wait(15, SC_NS);
  print();

  sc_stop();
}

void testbanch::print() {
  std::cout << "SEL:" << selection.read() << std::endl;
  std::cout << "OUT:" << output.read() << std::endl;
}
