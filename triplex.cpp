#include <iostream>

int main()
{
    // Prints welcome messages to terminal
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";
    std::cout << std::endl;

    // Declare 3 number code
    int FirstNumber = 8;
    int SecondNumber = 8;
    int ThirdNumber = 8;

    int CodeSum = FirstNumber + SecondNumber + ThirdNumber;
    int CodeProduct = FirstNumber * SecondNumber * ThirdNumber;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The code adds up to: " << CodeSum << std::endl;
    std::cout << "The product of the code is: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA + GuessB + GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!!" << std::endl;
    }
    else
    {
        std::cout << "BOOM! Roasted!" << std::endl;
    }

    return 0;
}