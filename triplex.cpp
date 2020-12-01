#include <iostream>

int main()
{
    // Prints welcome messages to terminal
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
    std::cout << std::endl;

    // Declare 3 number code
    int a = 8;
    int b = 8;
    int c = 8;

    int sum = a + b + c;
    int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}