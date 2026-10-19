// 10-05-2026
// Devon Woodson
// Marooned: AnotherCSC215 Game

#include <iostream> // This gives the program access to input and output tools.
#include <string> // This lets the program store words and sentences.

using namespace std; // Use the standard namespace for convenience

// Functions
string getAstronautName(); // Prompts the user to enter the astronaut's name
void showIntroduction(string astronautName); // Displays the game introduction with the astronaut's name
int chooseAction(); // Prompts the user to choose an action
int updateOxygen(int oxygenLevel, int action); // Updates the oxygen level based on the chosen action
string checkSpacecraft(int action); // Returns the status of the spacecraft based on the chosen action
void showStatus(int oxygenLevel, string spacecraftStatus); // Displays the current oxygen level and spacecraft status
string determineEnding(int oxygenLevel); // Determines the ending based on the oxygen level and returns the corresponding message

int main() // Main function that runs the game loop and handles the overall game flow
{// Start of main function
    // Variables
    string astronautName = ""; // Stores the name of the astronaut
    string spacecraftStatus = ""; // Stores the current status of the spacecraft
    string ending = ""; // Stores the ending message based on the oxygen level
    int action = 0; // Stores the action chosen by the player
    int oxygenLevel = 100; // Stores the current oxygen level of the astronaut

    astronautName = getAstronautName(); // Prompt the user to enter the astronaut's name

    showIntroduction(astronautName); // Display the game introduction with the astronaut's name

    action = chooseAction(); // Prompt the user to choose an action

    oxygenLevel = updateOxygen(oxygenLevel, action); // Update the oxygen level based on the chosen action 

    spacecraftStatus = checkSpacecraft(action); // Get the status of the spacecraft based on the chosen action
    
    showStatus(oxygenLevel, spacecraftStatus); // Display the current oxygen level and spacecraft status

    ending = determineEnding(oxygenLevel); // Determine the ending based on the oxygen level

    cout << ending << endl; // Display the ending message

    return 0; // Exit the program successfully
} // End of main function

// Function definitions
string getAstronautName() // Prompts the user to enter the astronaut's name
{ 
    string astronautName = ""; // Stores the astronaut's name entered by the user

    cout << "Enter your astronaut's name: "; // Prompt the user to enter the astronaut's name
    getline(cin, astronautName); // Read the astronaut's name from the user input

    return astronautName; // Return the astronaut's name to the caller
}

void showIntroduction(string astronautName) // Displays the game introduction with the astronaut's name
{
    cout << "\n========================================\n"; // Print the top border of the introduction section
    cout << "        MAROONED: ANOTHER CSC215 GAME\n"; // Print the game title
    cout << "========================================\n\n"; // Print the bottom border of the introduction section

    cout << "Astronaut " << astronautName << ", your spacecraft is stranded in orbit.\n"; // Inform the astronaut of the situation
    cout << "The return system has failed and your oxygen supply is dropping.\n"; // Warn about the oxygen supply
    cout << "Mission Control is standing by for your decision.\n\n"; // Indicate that help is available
}

int chooseAction() // Prompts the user to choose an action
{
    int action = 0; // Stores the action chosen by the user

    cout << "1. Attempt to repair the return system.\n"; // Option to repair the return system
    cout << "2. Conserve oxygen and wait for rescue.\n"; // Option to conserve oxygen
    cout << "3. Use emergency power to stabilize the spacecraft.\n"; // Option to use emergency power
    cout << "\nChoose your action: "; // Prompt the user to choose an action

    cin >> action; // Read the user's chosen action from input
    cin.ignore(); // Ignore the newline character left in the input buffer

    return action; // Return the chosen action to the caller
}

int updateOxygen(int oxygenLevel, int action) // Updates the oxygen level based on the chosen action
{
    if (action == 1) // If the user chose to repair the return system
    {
        oxygenLevel = oxygenLevel - 30; // Decrease oxygen level significantly for repair attempt
    }
    else if (action == 2) // If the user chose to conserve oxygen
    {
        oxygenLevel = oxygenLevel - 10; // Decrease oxygen level slightly for conserving oxygen
    }
    else if (action == 3) // If the user chose to use emergency power
    {
        oxygenLevel = oxygenLevel - 20; // Decrease oxygen level moderately for using emergency power
    }

    return oxygenLevel; // Return the updated oxygen level to the caller
}

string checkSpacecraft(int action) // Returns the status of the spacecraft based on the chosen action
{
    string spacecraftStatus = ""; // Stores the status of the spacecraft based on the chosen action

    if (action == 1) // If the user chose to repair the return system
    {
        spacecraftStatus = "Return system damaged. Repair attempt failed."; // Update status for repair attempt
    }
    else if (action == 2) // If the user chose to conserve oxygen
    {
        spacecraftStatus = "Spacecraft stable. Rescue mission approaching."; // Update status for conserving oxygen
    }
    else if (action == 3) // If the user chose to use emergency power
    {
        spacecraftStatus = "Emergency power active. Spacecraft stabilized."; // Update status for using emergency power
    }
    else // If the user entered an unknown action
    {
        spacecraftStatus = "Unknown command received."; // Update status for unknown action
    }

    return spacecraftStatus; // Return the updated spacecraft status to the caller
}

void showStatus(int oxygenLevel, string spacecraftStatus) // Displays the current oxygen level and spacecraft status
{
    cout << "\nSPACECRAFT STATUS\n"; // Display the spacecraft status header
    cout << "-----------------\n"; // Display a separator line for the spacecraft status section
    cout << "Oxygen: " << oxygenLevel << "%\n"; // Display the current oxygen level
    cout << "Status: " << spacecraftStatus << "\n\n"; // Display the current spacecraft status
}

string determineEnding(int oxygenLevel) // Determines the ending message based on the oxygen level
{
    string ending = ""; // Stores the ending message based on the oxygen level

    if (oxygenLevel >= 90) // If oxygen level is 90% or higher
    {
        ending = "The rescue spacecraft arrives. You survived!"; // Update ending for high oxygen level
    }
    else if (oxygenLevel >= 80) // If oxygen level is between 80% and 89%
    {
        ending = "Mission Control reaches you in time. You survived!"; // Update ending for moderately high oxygen level
    }
    else // If oxygen level is below 80%
    {
        ending = "Your oxygen is getting dangerously low, but rescue is on the way."; // Update ending for low oxygen level
    }

    return ending; // Return the determined ending message to the caller
}

