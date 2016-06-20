// module implementation
#include "decoder.h"

void decoder::do_decoder() {
  if (input.read() == "00") {
      output = "0001";
  } else if (input.read() == "01") {
      output = "0010";
  } else if (input.read() == "10") {
      output = "0100";
  } else if (input.read() == "11") {
      output = "1000";
  }
}
