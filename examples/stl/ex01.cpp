#include <exception>
#include <iostream>
#include <string>
#include <vector>

#include <forek/forek.hpp>

using forek::specification::stl::SignalTemporalLogic;

// A model of TL can be considered a sequence of valid propositions.
using Model = std::vector<std::vector<std::string>>;

auto main() -> int {
    std::string line;
    Model model = {{"p"}, {"p", "q"}, {"r"}, {"s"}, {"p"}};

    std::cout << "Signal Temporal Logic (STL) REPL\n\nPlease type any valid STL formula to "
                 "evaluate. The\nproposition variables `p` is true if model whereas `r` is "
                 "False.\n\nThe input model is: {{\"p\"}, {\"p\", \"q\"}, {\"r\"}, {\"s\"}, "
                 "{\"p\"}}\n\nEnter Ctrl+D to exit at any moment.\n\n";

    std::cout << ">> ";
    while (std::getline(std::cin, line)) {
        auto req = SignalTemporalLogic<bool>(line);

        try {
            auto ir = req.parse();
        } catch (const std::exception& e) {
            std::cerr << "SignalTemporalLogic: " << e.what() << "\n";
        }

        std::cout << ">> ";
    }

    std::cout << "\n";
    return 0;
}
