#include "x16r-bench/work.h"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
    if (argc > 1 && std::string(argv[1]) == "--help") {
        std::cerr << "x16r-bench [rounds]\n";
        return 0;
    }
    std::uint32_t rounds = 16;
    if (argc > 1) {
        rounds = static_cast<std::uint32_t>(std::stoul(argv[1]));
    }
    auto job = x16r::make_job(x16r::algo());
    auto n = x16r::bench(rounds);
    std::cout << "algo=" << x16r::algo() << " job=" << job.id << " rounds=" << n << "\n";
    return 0;
}
