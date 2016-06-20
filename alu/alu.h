#include "systemc.h"

SC_MODULE(alu) {
    sc_in < sc_lv<2> > a, b, selection;
    sc_out< sc_lv<2> > out;

    void do_alu();

    SC_CTOR(alu) {
      SC_METHOD(do_alu);
      sensitive << a << b << selection;
    }

};
