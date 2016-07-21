#include "systemc.h"

SC_MODULE(banco) {
    sc_in< bool > clock;
    sc_in< sc_logic > regWrite; // escrita ou leitura
    sc_in< sc_logic > clear; // limpa todos os registradores
    sc_in< sc_uint<4> > readRegister1, readRegister2, writeRegister; // instrucao
    sc_in< sc_uint<32> > writeData; // escrever

    sc_out< sc_uint<32> > dataOut1, dataOut2; // info dos registradores

    void do_banco();

    SC_CTOR(banco) {
        SC_THREAD(do_banco);
        sensitive << clock.pos();
    }
};
