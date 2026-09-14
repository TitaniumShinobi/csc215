#include <iostream> // This gives the program access to input and output tools.
#include <string> // This lets the program store words and sentences.

int main() // This is where the program begins running
{
    // These constants are used when the program calculates the player's score.
    const int LIFE_POINTS = 25; // Each life is worth 25 survival points.
    const int STRENGTH_POINTS = 5; // Each strength point is worth 5 survival points.
    const int SUPPLY_POINTS = 10; // Each supply item is worth 10 survival points.

    // These variables store information about the player.
    std::string playerName = ""; // This stores the player's real name.
    std::string characterName = ""; // This stores the player's Jumanji character name.
    std::string weakness = ""; // This stores the character's weakeness.
    int lives = 0; // This stores the number of lives the player has.
    int strength = 0; // This stores the player's strength rating.
    int supplies = 0; // This stores how many supplis the player has.
    int survivalScore = 0; // This stores the calculated survival score.

    // This displays the title of the game.
    std::cout << "========================================\n"; // This prints the top border.
    std::cout << "        JUMANJI: WELCOME TO CSC215\n"; // This prints the game title.
    std::cout << "========================================\n\n"; // This prints the bottom border.

    // This starts the story for the player.
    std::cout << "You find an old video game sitting on a table.\n"; // This introduces the game.
    std::cout << "The screen turns on even though it is not plugged in.\n"; // This continues the story.
    std::cout << "You probably should leave it alone, but you don't.\n\n"; // This adds some personality.

    // This asks the player to enter their name.
    std::cout << "Enter your name: "; // This asks the player for their real name.
    std::getline(std::cin, playerName); // This stores the player's name.

    // This asks the player to enter a character name.
    std::cout << "Enter your Jumanji character name: "; // This asks for a game character name.
    std::getline(std::cin, characterName); // This stores the character name.

    // This asks the player to enter their character's weakness.
    std::cout << "Enter your character's weakness: "; // This asks for a weakness.
    std::getline(std::cin, weakness); // This stores the weakness.

    // This asks the player to choose how many lives they have.
    std::cout << "How many lives does your character have? "; // This asks for the number of lives.
    std::cin >> lives; // This stores the number entered by the player.

    // This asks the player for a strength rating.
    std::cout << "Enter your strength from 1 to 10: "; // This asks for the player's strength.
    std::cin >> strength; // This stores the player's strength.

    // This asks the player how many supplies they have.
    std::cout << "How many supplies are in your backpack? "; // This asks for supply quantity.
    std::cin >> supplies; // This stores the number of supplies

    // This calculates the player's final survival score.
    survivalScore = (lives * LIFE_POINTS) + // This calculates points earned from lives.
                    (strength * STRENGTH_POINTS) + // This calculates points from strength.
                    (supplies * SUPPLY_POINTS); // This calculates points earned from supplis.

    // This displays the next part of the story.
    std::cout << "\n========================================\n"; // This prints another border.
    std::cout << "             ENTER JUMANJI\n"; // This prints the next section title.
    std::cout << "========================================\n\n"; // This closes the section title.

    // This tells the player what happens after entering the game.
    std::cout << playerName << " picks up the controller.\n"; // This uses the player's real name
    std::cout << "The room suddenly starts shaking.\n"; // This continues the story.
    std::cout << "A green light flashes across the room.\n"; // This describes entering Jumanji.
    std::cout << "Everything goes black.\n\n"; // This ends the first part of the story.

    // This tells the player they have entered the jungle.
    std::cout << "You wake up somewhere in the middle of a jungle.\n"; // This introduces the jungle.
    std::cout << "You look down and realize you don't look like yourself anymore.\n\n"; // This adds detail.

    // This displays he player's character information.
    std::cout << "Character Information\n"; // This prints the character section heading.
    std::cout << "----------------------\n"; // This prints a divider.
    std::cout << "Name: " << characterName << "\n"; // This displays the character name.
    std::cout << "Lives: " << lives << "\n"; // This display the player's lives.
    std::cout << "Strength: " << strength << "\n"; // This displays the player's strength.
    std::cout << "Supplies: " << supplies << "\n"; // This displays the player's supplies.
    std::cout << "Weakness: " << weakness << "\n"; // This displays the character weakness.
    std::cout << "Survival Score: " << survivalScore << "\n\n"; // This displays the calculated score.

    // This finishes the simulation with a message from Jumanji.
    std::cout << "Suddenly you hear drums somewhere in the jungle.\n"; // This adds Jumanji atmosphere.
    std::cout << "A message appears in front of you...\n\n"; // This introduces the final message.
    std::cout << "\"RETURN THE JAGUAR'S EYE AND SAVE JUMANJI.\"\n\n"; // This gives the player a mission.

    // This displays he ending message.
    std::cout << "Good luck, " << characterName << ". You're gonna need it.\n"; // This ends the story.
    std::cout << "Welcome to Jumanji!\n"; // This prints the final message.

    return 0; // This tells the computer that the program ended successfully.
}
