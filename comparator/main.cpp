#include "systemc.h"
#include "comparator.h"
#include "testbanch.h"

int sc_main(int argc, char* argv[]) {
  sc_signal < sc_lv<2> > a_s, b_s;
  sc_signal < sc_logic > less_s, equal_s, greater_s;

  comparator comp("comparator");
  comp.a(a_s);
  comp.b(b_s);
  comp.less(less_s);
  comp.equal(equal_s);
  comp.greater(greater_s);

  testbanch tb("testbanch");
  tb.a(a_s);
  tb.b(b_s);
  tb.less(less_s);
  tb.equal(equal_s);
  tb.greater(greater_s);

  sc_start(200, SC_NS);

  return 0;
}
