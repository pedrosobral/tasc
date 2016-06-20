#include "systemc.h"
#include "alu.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal < sc_lv<2> > a_s, b_s, sel_s, out_s;

  alu alu("alu");
  alu.a(a_s);
  alu.b(b_s);
  alu.selection(sel_s);
  alu.out(out_s);

  testbanch tb("testbanch");
  tb.a(a_s);
  tb.b(b_s);
  tb.selection(sel_s);
  tb.out(out_s);

  sc_start(200, SC_NS);

  return 0;
}
