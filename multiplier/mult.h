#include "systemc.h"

SC_MODULE(mult) {
    sc_in < sc_lv<2> > a, b;
    sc_out< sc_lv<4> > out;

    void do_mult();

    SC_CTOR(mult) {
      SC_METHOD(do_mult);
      sensitive << a << b;
    }

};
