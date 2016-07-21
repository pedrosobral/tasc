#include "banco_registradores.h"

void banco::do_banco() {
    if (regWrite.read() == SC_LOGIC_1) {
        // memoria[writeRegister] = writeData;
    }
}
