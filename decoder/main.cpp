#include "systemc.h"
#include "decoder.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal < sc_lv<2> > input_s;
  sc_signal < sc_lv<4> > output_s;

  decoder deco("deco");
  deco.input(input_s);
  deco.output(output_s);
  
  testbanch tb("testbanch");
  tb.input(input_s);
  tb.output(output_s);

  sc_start(200, SC_NS);

  return 0;
}
