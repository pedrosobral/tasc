// module implementation
#include "mux.h"

void mux::do_mux() {
  if (selection.read() == "00") {
      output = in0.read();
  } else if (selection.read() == "01") {
      output = in1.read();
  } else if (selection.read() == "10") {
      output = in2.read();
  } else if (selection.read() == "11") {
      output = in3.read();
  }
}
