#include "systemc.h"

SC_MODULE(testbanch) {
  sc_out < sc_lv<3> > in0, in1, in2, in3;
  sc_out < sc_lv<2> > selection;
  sc_in  < sc_lv<3> > output;

  void print();
  void process();

  SC_CTOR(testbanch) {
    SC_THREAD(process);
  }
};
