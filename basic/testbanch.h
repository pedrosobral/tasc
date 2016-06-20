#include "systemc.h"

SC_MODULE(testbanch) {
  sc_out<sc_logic> in;
  sc_in <sc_logic> out;

  void print();
  void process();

  SC_CTOR(testbanch) {
    SC_THREAD(process);
  }
};
