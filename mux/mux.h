#include "systemc.h"

SC_MODULE(mux) {
    sc_in < sc_lv<3> > in0, in1, in2, in3;
    sc_in < sc_lv<2> > selection;
    sc_out< sc_lv<3> > output;
    void do_mux();

    SC_CTOR(mux) {
      SC_METHOD(do_mux);
      sensitive << in0 << in1 << in2 << in3 << selection;
    }

};
