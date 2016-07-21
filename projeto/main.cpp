#include "systemc.h"
#include "module.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
    // 100MHz clock frequency (1 us clock period | us=micro second)
    sc_clock clk("clock", 1, SC_US);

    sc_signal<sc_uint<32> > data_in_s, data_out_s;

    module mod("mod");
    mod.data(data_in_s);
    mod.data(data_out_s);
    mod.clock(clk);

    // testbanch tb("testbanch");
    // tb.in(in_s);
    // tb.out(out_s);

    sc_start(200, SC_NS);

    return 0;
}
