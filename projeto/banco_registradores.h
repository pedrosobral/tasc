#include "systemc.h"

SC_MODULE(banco) {
    sc_in< bool > clock;
    sc_in< sc_logic > regWrite;  // escrita ou leitura
    sc_in< sc_logic > clear;     // limpa todos os registradores
    sc_in< sc_uint<4> > readRegister1,  // reg1 para ler
                        readRegister2,  // reg2 para ler
                        writeRegister;  // reg2 para escrever
    sc_in< sc_uint<32> > writeData;     // o que vai ser escrito

    sc_out< sc_uint<32> > dataOut1, dataOut2;  // info dos registradores


    SC_CTOR(banco) {
        print_registradores();
        SC_THREAD(do_banco);
        sensitive << clock.pos();
        SC_METHOD(do_read);
        sensitive << readRegister1 << readRegister2 << regWrite << writeData << clear;
    }

    private:
        void print_registradores();
        void do_banco();
        void do_read();
        sc_uint<32> memoria[16] = {
                        0x00, 0x01, 0x02, 0x03,
                        0x04, 0x05, 0x06, 0x07,

                        0x08, 0x02, 0x04, 0x0B,
                        0x0C, 0x0D, 0x0E, 0x0F };
};
