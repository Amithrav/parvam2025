#include <iostream>
#include <stdexcept>

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Division by zero is undefined.");
    }
    return numerator / denominator;
}

int main() {
    double num1, num2;
    std::cout << "Enter numerator: ";
    std::cin >> num1;
    std::cout << "Enter denominator: ";
    std::cin >> num2;
    try {
        double result = divide(num1, num2);
        std::cout << "Result: " << result << "\n";
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    return 0;
}