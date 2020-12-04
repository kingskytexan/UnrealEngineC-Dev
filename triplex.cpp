#include <iostream>

void PrintIntroduction()
{
     // Shows welcome messages to terminal
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

void PlayGame()
{
    PrintIntroduction();

    // Declare 3 number code
    int FirstNumber = 8;
    int SecondNumber = 8;
    int ThirdNumber = 8;

    int CodeSum = FirstNumber + SecondNumber + ThirdNumber;
    int CodeProduct = FirstNumber * SecondNumber * ThirdNumber;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code\n";
    std::cout << "\nThe code adds up to: " << CodeSum << std::endl;
    std::cout << "\nThe product of the code is: " << CodeProduct << std::endl;

    // Store the player's guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA + GuessB + GuessC;

    // Check if the player's guess is correct or not
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!!\n";
    }
    else
    {
        std::cout << "BOOM! Roasted!\n";
    }
}

int main()
{
   PlayGame();
    return 0;
}