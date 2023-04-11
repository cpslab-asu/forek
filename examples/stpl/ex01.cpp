#include <exception>
#include <iostream>
#include <string>
#include <vector>

#include <forek/forek.hpp>

using forek::specification::stpl::SpatioTemporalPerceptionLogic;

// A model of TL can be considered a sequence of valid propositions.
using Model = std::vector<std::vector<std::string>>;

auto main() -> int {
    std::string line;
    Model model = {{"p"}, {"p", "q"}, {"r"}, {"s"}, {"p"}};

    std::cout
        << "Spatio-Temporal Perception Logic (STPL) REPL\n\nPlease type any valid STPL formula "
           "to evaluate. The set of\nAtomic Propositions (APs) is {`p`, `q`, `r`, `s`}.\n\nThe "
           "input model is: {{\"p\"}, {\"p\", \"q\"}, {\"r\"}, {\"s\"}, {\"p\"}}\n\nEnter Ctrl+D "
           "to exit at any moment.\n\n";

    std::cout << ">> ";
    while (std::getline(std::cin, line)) {
        auto req = SpatioTemporalPerceptionLogic<double>(line);

        try {
            auto ir = req.parse();
        } catch (const std::exception& e) {
            std::cerr << "SpatioTemporalPerceptionLogic: " << e.what() << "\n";
        }

        std::cout << ">> ";
    }

    std::cout << "\n";
    return 0;
}
