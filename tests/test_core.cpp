#include "x16r-bench/work.h"

#include <cstdlib>
#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond " (" << __FILE__ << ":" << __LINE__  \
                      << ")\n";                                              \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    auto a = x16r::make_job("pool");
    auto b = x16r::make_job("pool");
    CHECK(a.id == b.id);
    CHECK(x16r::hash_nonce(a, 1) != x16r::hash_nonce(a, 2));
    CHECK(x16r::bench(8) == 8);
    CHECK(x16r::algo() != nullptr);
    std::cout << "ok\n";
    return 0;
}
