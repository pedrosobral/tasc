#include "systemc.h"

SC_MODULE(add) {
    sc_in < sc_lv<2> > a, b;

    // last bit is the carry out
    sc_out< sc_lv<3> > sum;

    void do_add();

    SC_CTOR(add) {
      SC_METHOD(do_add);
      sensitive << a << b;
    }

};
