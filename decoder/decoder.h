#include "systemc.h"

SC_MODULE(decoder) {
    sc_in < sc_lv<2> > input;
    sc_out< sc_lv<4> > output;
    void do_decoder();

    SC_CTOR(decoder) {
      SC_METHOD(do_decoder);
      sensitive << input;
    }

};
