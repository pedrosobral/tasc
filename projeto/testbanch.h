#include "systemc.h"

SC_MODULE(testbanch) {
    sc_in<bool> clock;
    sc_out< sc_logic > regWrite;  // escrita ou leitura
    sc_out< sc_logic > clear;     // limpa todos os registradores
    sc_out< sc_uint<4> > readRegister1,  // reg1 para ler
                        readRegister2,  // reg2 para ler
                        writeRegister;  // reg2 para escrever
    sc_out< sc_uint<32> > writeData;     // o que vai ser escrito

    sc_in< sc_uint<32> > dataOut1, dataOut2;  // info dos registradore

    void print();
    void process();

    SC_CTOR(testbanch) {
        SC_THREAD(process);
        sensitive << clock.pos();
    }
};
