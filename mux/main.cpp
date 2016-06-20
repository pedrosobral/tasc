#include "systemc.h"
#include "mux.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal < sc_lv<3> > in0_s, in1_s, in2_s, in3_s;
  sc_signal < sc_lv<2> > selection_s;
  sc_signal < sc_lv<3> > output_s;

  mux mux("mux");
  mux.in0(in0_s);
  mux.in1(in1_s);
  mux.in2(in2_s);
  mux.in3(in3_s);
  mux.selection(selection_s);
  mux.output(output_s);

  testbanch tb("testbanch");
  tb.in0(in0_s);
  tb.in1(in1_s);
  tb.in2(in2_s);
  tb.in3(in3_s);
  tb.selection(selection_s);
  tb.output(output_s);

  sc_start(200, SC_NS);

  return 0;
}
