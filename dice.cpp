// Rolls two dice many times and prints a histogram of the sums.
#include <iostream>
#include <iomanip>
#include <random>
#include <map>

int main(int argc, char *argv[]) {
    int rolls = argc > 1 ? std::stoi(argv[1]) : 1000;
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<int> die(1, 6);

    std::map<int, int> count;
    for (int i = 0; i < rolls; i++) count[die(gen) + die(gen)]++;

    for (int sum = 2; sum <= 12; sum++)
        std::cout << std::setw(2) << sum << " | " << std::string(count[sum] * 60 / rolls, '#')
                  << " " << count[sum] << "\n";
}
