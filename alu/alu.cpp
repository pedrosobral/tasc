// module implementation
#include "alu.h"

void alu::do_alu() {
  sc_uint<2> int_a, int_b;

  int_a = static_cast< sc_uint<2> >(a.read());
  int_b = static_cast< sc_uint<2> >(b.read());

  if (selection.read() == "00") {
      out = int_a + int_b;
  } else if (selection.read() == "01") {
      out = int_a - int_b;
  } else if (selection.read() == "10") {
      out = a.read() & b.read();
  } else if (selection.read() == "11") {
      out = a.read() | b.read();
  }
}
