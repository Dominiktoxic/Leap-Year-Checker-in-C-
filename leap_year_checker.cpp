#include <iostream>
#include <string>

int main() {
    std::string input;
    int year = 0;

    std::cout << "**************** LEAP YEAR CHECKER **************** \n";

    do {
        std::cout << "Enter a year: (Enter '-' to quit) ";
        std::cin >> input;

        if (input != "-") {
            year = std::stoi(input);

            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                std::cout << "The year " << year << " is a leap year! \n";
            } else {
                std::cout << "The year " << year << " is not a leap year! \n";
            }
        }
    } while (input != "-");

    std::cout << "*************************************************** \n";

    return 0;
}