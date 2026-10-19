// 10-05-2026
// Devon Woodson
// Random Number Generator

#include <iostream> // Include the input-output stream library for console output
#include <cstdlib> // Include the C standard library for rand() and srand()
#include <ctime> // Include the C time library for time() function

using namespace std; // Use the standard namespace for convenience

int main() { // Main function of the program
    // Constants for the random number range
    const int MIN = 1; // Constant for the minimum random number value
    const int MAX = 100; // Constant for the maximum random number value
    const int ARRAY_SIZE = 20; // Constant for the array size

    // Variables for the random number generation
    int smallestNumber = MAX; // Variable to store the smallest generated random number
    int largestNumber = MIN; // Variable to store the largest generated random number
    int sum = 0; // Variable to store the sum of generated random numbers
    double average = 0.0; // Variable to store the average of generated random numbers

    // Arrays
    int randomNumbers[ARRAY_SIZE]; // Array to store multiple random numbers

    srand(time(0)); // Seed the random number generator
    
    for (int index = 0; index < ARRAY_SIZE; index++) { // Loop to generate and process random numbers
        
        randomNumbers[index] = rand() % (MAX - MIN + 1) + MIN; // Generate a random number within the range
        
        std::cout << "Random number " << index + 1 << ": " << randomNumbers[index] << std::endl; // Output the current random number
        
        if (randomNumbers[index] < smallestNumber) // Check if the current number is smaller than the smallest number
        {
            smallestNumber = randomNumbers[index]; // Update the smallest number if a smaller one is found
        }
        if (randomNumbers[index] > largestNumber) // Check if the current number is larger than the largest number
        {
            largestNumber = randomNumbers[index]; // Update the largest number if a larger one is found
        }
        sum += randomNumbers[index]; // Add the current number to the sum
    }

    std::cout << "Smallest random number: " << smallestNumber << std::endl; // Output the smallest random number
    std::cout << "Largest random number: " << largestNumber << std::endl; // Output the largest random number
    std::cout << "Sum of random numbers: " << sum << std::endl; // Output the sum of random numbers

    average = static_cast<double>(sum) / ARRAY_SIZE; // Calculate the average of random numbers
    
    std::cout << "Average of random numbers: " << average << std::endl; // Output the average of random numbers
    
    return 0; // Indicate successful program termination
} // End of main function