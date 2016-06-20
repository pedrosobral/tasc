#include "systemc.h"

SC_MODULE(module) {
    sc_in <sc_logic> in;
    sc_out<sc_logic> out;
    void do_module();

    SC_CTOR(module) {
      SC_METHOD(do_module);
      sensitive << in;
    }

};
