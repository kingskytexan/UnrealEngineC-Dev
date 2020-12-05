#include <iostream>

void PrintIntroduction()
{
     // Shows welcome messages to terminal
    std::cout << "\n\nYou are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n\n";
}

bool PlayGame()
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
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct or not
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!!\n";
        return true;
    }
    else
    {
        std::cout << "BOOM! Roasted!\n";
        return false;
    }
}

int main()
{
    // Loop runs through the game and when you get the answer right you move on the next level
    // if not the game ends
    while(true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
    }
   
    return 0;
}