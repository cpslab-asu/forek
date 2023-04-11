#include "ex01.hpp"

#include <exception>
#include <iostream>
#include <string>
#include <vector>

#include <forek/forek.hpp>
#include <forek/formula/visitor/arithmetic/default.hpp>

using examples::ex01::TimedPropositionalTemporalLogicInterpretation;
using forek::specification::tptl::TimedPropositionalTemporalLogic;

template <typename T>
using DefaultArithmeticVisitor = forek::formula::visitor::arithmetic::DefaultVisitor<T>;

// A model of TL can be considered a sequence of valid propositions.
using Model = std::vector<std::vector<std::string>>;

auto main() -> int {
    std::string line;
    Model model = {{"p"}, {"p", "q"}, {"r"}, {"s"}, {"p"}};

    std::cout
        << "Timed Propositional Temporal Logic (TPTL) REPL\n\nPlease type any valid PL formula "
           "to evaluate. The set of\nAtomic Propositions (APs) is {`p`, `q`, `r`, `s`}.\n\nThe "
           "input model is: {{\"p\"}, {\"p\", \"q\"}, {\"r\"}, {\"s\"}, {\"p\"}}\n\nEnter Ctrl+D "
           "to exit at any moment.\n\n";

    std::cout << ">> ";
    while (std::getline(std::cin, line)) {
        auto req = TimedPropositionalTemporalLogic<double>(line);

        try {
            auto ir = req.parse();
            auto solver = DefaultArithmeticVisitor<double>();

            auto interpreter = TimedPropositionalTemporalLogicInterpretation<double>(solver, model);

            ir.evaluate(interpreter);
            std::cout << ir.expr().get()->data() << "\n";
        } catch (const std::exception& e) {
            std::cerr << e.what() << "\n";
        }

        std::cout << ">> ";
    }

    std::cout << "\n";
    return 0;
}
