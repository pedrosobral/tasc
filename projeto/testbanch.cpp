// testbanch implementation
#include "testbanch.h"
#include <fstream>
#include <sstream>
#include <stdlib.h>

// reg = $s0
int getAddr(std::string reg) {
    char var = reg[1];       // get $[s]h
    int  num = reg[2] - 48;  // get $s[0]

    return var == 's' ? num + 8 : num;
}

void testbanch::process() {
    while(true) {
        fstream f("input.asm", ios::in);
        if (f.good())
        {
            std::string op, rd, rs, rt, result;
            while(getline(f, op)) {
                wait();
                std::istringstream s(op);
                s >> op >> rd >> rs >> rt;

                readRegister1 = getAddr(rs);
                readRegister2 = getAddr(rt);
                writeRegister = getAddr(rd);

                regWrite = SC_LOGIC_1;
                writeData = 6;
                wait();
                print();
            }
        }
        f.close();
    }
}

void testbanch::print() {
    std::cerr << "**************************************" << std::endl;
    std::cout << "regWrite:  " << regWrite.read() << std::endl;
    std::cout << "clear:     " << clear.read() << std::endl;
    std::cout << "reg1:      " << readRegister1.read()+8 << std::endl;
    std::cout << "reg2:      " << readRegister2.read()+8 << std::endl;
    std::cout << "writeReg:  " << writeRegister.read()+8 << std::endl;
    std::cout << "writeData: " << writeData.read() << std::endl;
    std::cout << "out1:      " << dataOut1.read() << std::endl;
    std::cout << "out2:      " << dataOut2.read() << std::endl;
}
