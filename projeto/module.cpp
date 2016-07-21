// module implementation
#include "module.h"

void module::do_module() {
    if (clear.read() == SC_LOGIC_0) {
        data = 0;
    }

    if (load.read() == SC_LOGIC_1) {
        data = data.read();
    } else {
        data.write(data.read());
    }
}
