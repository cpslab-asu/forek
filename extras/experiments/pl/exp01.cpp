#include "exp01.hpp"

#include <chrono>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <ratio>

#include <bits/chrono.h>

#include <forek/forek.hpp>

using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    auto dir = std::filesystem::path(__FILE__).parent_path();
    auto out = dir;

    dir.append("data/");
    out.append("benchmarks.csv");

    std::ofstream outfile;

    outfile.open(out.string());

    // write CSV headers
    outfile << "replication,size,elapsed,memory,filename\n";

    for (const auto &entry : std::filesystem::directory_iterator(dir.string())) {
        std::ifstream infile;
        infile.open(entry.path());

        std::stringstream buffer;
        buffer << infile.rdbuf();

        for (int i = 0; i < 100; ++i) {
            auto spec = PropositionalLogic<int>(buffer.str());
            auto interpreter = PropositionalLogicCounter<int>();

            auto start = std::chrono::high_resolution_clock::now();
            auto formula = spec.parse();
            auto end = std::chrono::high_resolution_clock::now();

            formula.evaluate(interpreter);
            std::chrono::duration<double, std::milli> elapsed = end - start;

            outfile << i << "," << formula.expr().get()->data() << "," << elapsed << ","
                    << interpreter.memory << "," << entry.path().filename() << "\n";
        }

        infile.close();
    }

    outfile.close();
    return 0;
}
