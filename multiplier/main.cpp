#include "systemc.h"
#include "mult.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal < sc_lv<2> > a_s, b_s;
  sc_signal < sc_lv<4> > out_s;

  mult mult("mult");
  mult.a(a_s);
  mult.b(b_s);
  mult.out(out_s);

  testbanch tb("testbanch");
  tb.a(a_s);
  tb.b(b_s);
  tb.out(out_s);

  sc_start(200, SC_NS);

  return 0;
}
