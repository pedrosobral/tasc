#include "systemc.h"
#include "add.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal < sc_lv<2> > a_s, b_s;
  sc_signal < sc_lv<3> > sum_s;

  add add("add");
  add.a(a_s);
  add.b(b_s);
  add.sum(sum_s);

  testbanch tb("testbanch");
  tb.a(a_s);
  tb.b(b_s);
  tb.sum(sum_s);

  sc_start(200, SC_NS);

  return 0;
}
