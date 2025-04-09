//Including the necessary libraries
#include <iostream>
#include <cstdlib>
#include <cstdio>

int main()
{
    std::rand();
    srand(time(NULL));

    int answer = std::rand() % 100; //Ensuring that the randomly generated answer is between 1 and 100
    int guess;

    std::cout << "I'm thinking of a number between 1 and 100.\n";
    std::cout << "Enter your guess below:\n";
    std::cin >> guess; //initial guess

    while (guess != answer) {
        if (guess < answer) {
            std::cout << "Higher\n";
        }
        else {
            std::cout << "Lower\n";
        }
        std::cout << "Try again.\n";
        std::cin >> guess;
    }
    std::cout << "Nailed It!";
}
    


