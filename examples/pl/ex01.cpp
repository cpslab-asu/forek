#include "ex01.hpp"

#include <exception>
#include <iostream>
#include <string>

#include <forek/forek.hpp>

using examples::ex01::PropositionalLogicInterpretation;
using forek::specification::pl::PropositionalLogic;

auto main() -> int {
    std::string line;

    std::cout << "Propositional Logic (PL) REPL\n\nPlease type any valid PL formula "
                 "to evaluate. The\nproposition variables `p`, `q`, and `s` are True "
                 "whereas `r` is False.\n\nEnter Ctrl+D to exit at any moment.\n\n";

    std::cout << ">> ";
    while (std::getline(std::cin, line)) {
        auto req = PropositionalLogic<bool>(line);

        try {
            auto ir = req.parse();
            auto interpreter = PropositionalLogicInterpretation<bool>();

            ir.evaluate(interpreter);
            std::cout << ir.expr()->data() << "\n";
        } catch (const std::exception& e) {
            std::cerr << "PropositionalLogic: " << e.what() << "\n";
        }

        std::cout << ">> ";
    }

    std::cout << "\n";
    return 0;
}
