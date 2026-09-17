#include <iomanip>
#include <iostream>

int main() {
    double first = 0.0, second = 0.0, third = 0.0;
    std::cout << "Enter three scores: ";
    if (!(std::cin >> first >> second >> third)) {
        std::cerr << "Invalid input\n";
        return 1;
    }
    if (first < 0.0 || first > 100.0 || second < 0.0 || second > 100.0 ||
        third < 0.0 || third > 100.0) {
        std::cerr << "Invalid score\n";
        return 1;
    }
    const double average = (first + second + third) / 3.0;
    std::cout << std::fixed << std::setprecision(1)
              << "Average: " << average << '\n';
    return 0;
}

