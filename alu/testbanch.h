#include "systemc.h"

SC_MODULE(testbanch) {
  int test_count;
  sc_out < sc_lv<2> > a, b, selection;
  sc_in < sc_lv<2> > out;

  void print();
  void process();

  SC_CTOR(testbanch) {
    SC_THREAD(process);
    test_count = 0;
  }
};
