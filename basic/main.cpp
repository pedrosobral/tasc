#include "systemc.h"
#include "module.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal<sc_logic> in_s, out_s;

  module mod("mod");
  mod.in(in_s);
  mod.out(out_s);

  testbanch tb("testbanch");
  tb.in(in_s);
  tb.out(out_s);

  sc_start(200, SC_NS);

  return 0;
}
