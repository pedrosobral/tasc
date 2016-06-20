// module implementation
#include "comparator.h"

void comparator::do_comparator() {
  sc_uint<2> int_a, int_b;

  int_a = static_cast< sc_uint<2> >(a.read());
  int_b = static_cast< sc_uint<2> >(b.read());

  if (int_a < int_b) {
    less = SC_LOGIC_1; equal = SC_LOGIC_0; greater = SC_LOGIC_0;
  } else if (int_a == int_b) {
    less = SC_LOGIC_0; equal = SC_LOGIC_1; greater = SC_LOGIC_0;
  } else {
    less = SC_LOGIC_0; equal = SC_LOGIC_0; greater = SC_LOGIC_1;
  }
}
