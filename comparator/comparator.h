#include "systemc.h"

SC_MODULE(comparator) {
    sc_in < sc_lv<2> > a, b;

    // last bit is the carry out
    sc_out< sc_logic > less, equal, greater;

    void do_comparator();

    SC_CTOR(comparator) {
      SC_METHOD(do_comparator);
      sensitive << a << b;
    }

};
