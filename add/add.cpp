// module implementation
#include "add.h"

void add::do_add() {
  sc_uint<2> int_a, int_b;

  int_a = static_cast< sc_uint<2> >(a.read());
  int_b = static_cast< sc_uint<2> >(b.read());
  sum = static_cast< sc_lv<3> >(int_a + int_b);
}
