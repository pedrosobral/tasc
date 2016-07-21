#include "banco_registradores.h"
#include <iomanip>

void banco::print_registradores() {
    std::cout << "*** REGISTRADORES ***" << std::endl;
    std::cout << "ADDR | VALUE | REG"  << std::endl;
    for (size_t i = 8; i > 0; i--) {
        std::cout << std::setw(4) << (i+7)+8 << " | " << std::setw(5) << memoria[i+7]
                << " | " << "s" << i-1 << std::endl;
    }
    for (size_t i = 8; i > 0; i--) {
        std::cout << std::setw(4) << (i-1)+8 << " | " << std::setw(5) << memoria[i-1]
                << " | " << "t" << i-1 << std::endl;
    }
    std::cout << std::endl;
}

void banco::do_banco() {
    while(true) {
        // wait(writeData.value_changed_event());
        wait();
        // std::cerr << "banco::do_banco()" << std::endl;
        // std::cerr << "regWrite: " << regWrite.read() << std::endl;
        if (regWrite.read() == SC_LOGIC_1) {
            // std::cerr << "writing" << std::endl;
            memoria[writeRegister.read()] = writeData.read();
            print_registradores();
        }
        wait();
    }
}

void banco::do_read() {
    // std::cerr << "banco::do_read()" << std::endl;
    dataOut1 = memoria[readRegister1.read()];
    dataOut2 = memoria[readRegister2.read()];
}
