// 10-03-2026
// Devon Woodson
// This file contains the code for the UAT tour simulation.

#include <iostream> // This includes the input/output library.
#include <string> // This includes the string library.
#include <cstdlib> // This includes the standard library for general utilities.
#include <ctime> // This includes the time library.
#include <windows.h> // This includes Windows tools for the bell sound.

using namespace std; // Use the standard namespace to avoid prefixing standard library names with "std::".

int main() { // Main function that starts the UAT tour simulation program.

    // Constants
    
    // Variables
    int professorGuess = 0; // This will store the user's guess for the professor.
    int randomProfessor = 0; // This will store the randomly selected professor.
    char playAgain = 'y'; // This will store the user's choice to play again.

    // Arrays
    string professors[10] = { // List of professors at UAT
        "Dr. Briant Becote",
        "Sharon Bolman",
        "Rae Crusoe",
        "Dr. Hue Henry",
        "Jacob Hreshchyshyn",
        "Ryan Murray",
        "Dr. Mathew Prater",
        "Dapzury Valenzuela",
        "Ralen Watson-Davis",
        "Dr. Ellen Wolterbeek"
    }; // End of professors array initialization.
    
    srand(time(0)); // This starts the random number generator using the current time.

    do {
        std::cout << "Welcome to the UAT tour simulation!\n"; // This prints the welcome message.
        std::cout << "\nProfessors you may meet:\n"; // Display the list of professors the user may encounter.

        for (int index = 0; index < 10; index++) // Loop through the professors array and display each professor.
        {
            std::cout << index + 1 << ". " << professors[index] << "\n"; // Display each professor with their corresponding number.
        }
      
        randomProfessor = rand() % 10; // Select a random professor from the array.
        std::cout << "Guess which professor it is (enter a number between 1 and 10): "; // Prompt the user to guess the professor.
        std::cin >> professorGuess; // Read the user's guess for the professor.

        if (professorGuess - 1 == randomProfessor) // Check if the user's guess matches the randomly selected professor.
        {
            std::cout << "Correct! You guessed the right professor.\n"; // Inform the user that their guess was correct.
        } 
        else 
        {
            std::cout << "Incorrect. The correct professor was: " << professors[randomProfessor] << "\n"; // Inform the user of the correct professor if their guess was wrong.
        }

        Beep(750, 1000); // This rings the bell at the end of the classroom tour.
        
        std::cout << "Do you want to play again? (y/n): "; // Ask the user if they want to play again.
        std::cin >> playAgain; // Read the user's choice to play again.

    } while (playAgain == 'y' || playAgain == 'Y'); // Continue the loop if the user wants to play again.

    return 0; // This tells the computer that the program ended successfully.
}
