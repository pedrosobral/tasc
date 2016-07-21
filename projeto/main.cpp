#include "systemc.h"
// #include "module.h"
#include "banco_registradores.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
    // sc_clock clk("clock", 1, SC_NS, 0.5);
    sc_clock clk;

    sc_signal<sc_uint<4>> readRegister1_s, readRegister2_s, writeRegister_s;
    sc_signal<sc_logic> regWrite_s, clear_s;
    sc_signal<sc_uint<32>> writeData_s, dataOut1_s, dataOut2_s;

    banco b("banco");

    b.regWrite(regWrite_s);
    b.clear(clear_s);
    b.readRegister1(readRegister1_s);
    b.readRegister2(readRegister2_s);
    b.writeRegister(writeRegister_s);
    b.writeData(writeData_s);
    b.dataOut1(dataOut1_s);
    b.dataOut2(dataOut2_s);

    testbanch tb("testbanch");
    tb.regWrite(regWrite_s);
    tb.clear(clear_s);
    tb.readRegister1(readRegister1_s);
    tb.readRegister2(readRegister2_s);
    tb.writeRegister(writeRegister_s);
    tb.writeData(writeData_s);
    tb.dataOut1(dataOut1_s);
    tb.dataOut2(dataOut2_s);

    b.clock(clk);
    tb.clock(clk);

    sc_start(15, SC_NS);
    // sc_start();

    return 0;
}
