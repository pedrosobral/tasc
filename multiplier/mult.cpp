// module implementation
#include "mult.h"

void mult::do_mult() {
  sc_uint<2> int_a, int_b;

  int_a = static_cast< sc_uint<2> >(a.read());
  int_b = static_cast< sc_uint<2> >(b.read());

  out = static_cast< sc_lv<4> >(int_a * int_b);
}
