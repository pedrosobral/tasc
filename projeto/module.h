#include "systemc.h"

SC_MODULE(module) {
    sc_inout < sc_uint<32> > data;
    sc_in < sc_logic > load, clear;
    sc_in < bool > clock;

    void do_module();

    SC_CTOR(module) {
      SC_THREAD(do_module);
      sensitive << clock.pos();
    }

};
