#include <exception>
#include <iostream>
#include <string>
#include <vector>

#include <forek/forek.hpp>

using forek::specification::ltl::LinearTemporalLogic;

// A model of TL can be considered a sequence of valid propositions.
using Model = std::vector<std::vector<std::string>>;

auto main() -> int {
    std::string line;
    Model model = {{"p"}, {"p", "q"}, {"r"}, {"s"}, {"p"}};

    std::cout << "Linear Temporal Logic (LTL) REPL\n\nPlease type any valid LTL formula to "
                 "evaluate. The\nproposition variables `p` is true if model whereas `r` is "
                 "False.\n\nThe input model is: {{\"p\"}, {\"p\", \"q\"}, {\"r\"}, {\"s\"}, "
                 "{\"p\"}}\n\nEnter Ctrl+D to exit at any moment.\n\n";

    std::cout << ">> ";
    while (std::getline(std::cin, line)) {
        auto req = LinearTemporalLogic<bool>(line);

        try {
            auto ir = req.parse();
        } catch (const std::exception& e) {
            std::cerr << "LinearTemporalLogic: " << e.what() << "\n";
        }

        std::cout << ">> ";
    }

    std::cout << "\n";
    return 0;
}
