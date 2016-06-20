#include "systemc.h"

SC_MODULE(testbanch) {
  int test_count;
  sc_out < sc_lv<2> > a, b;
  sc_in  < sc_lv<3> > sum;

  void print();
  void process();

  SC_CTOR(testbanch) {
    SC_THREAD(process);
    test_count = 0;
  }
};
