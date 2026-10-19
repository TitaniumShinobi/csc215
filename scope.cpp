// 10-18-2026
// Devon Woodson
// Scope: CSC215 Project

#include <iostream> // This gives the program access to input and output tools.
#include <string> // This lets the program store words and sentences.

using namespace std; // Use the standard namespace for convenience.

// Functions
void showSystemStatus(); // Displays the current status of the system.
void checkMemory(int memoryUsage); // Checks the current memory status of the system.
void runDiagnostics(); // Runs a series of system diagnostics to check overall system health.
void displayFooter(); // Displays the footer of the system monitor.

int main() // Main function that controls the system monitor.
{// Start of main function.
    // Variables
    int memoryUsage = 85; // Stores the current memory usage of the system.

    // Program
    showSystemStatus(); // Display the current system status.
    checkMemory(memoryUsage); // Check the current memory status of the system.
    
    runDiagnostics(); // Run system diagnostics.
    runDiagnostics(); // Run system diagnostics.
    runDiagnostics(); // Run system diagnostics.
    displayFooter(); // Display the footer of the system monitor.

    return 0; // Exit the program successfully.
} // End of main function.

// Function definitions
void showSystemStatus() // Displays the current status of the system.
{ // Start of showSystemStatus function.
    // This variable only exists inside this function.
    string systemName = "LIFE Technology"; // Local variable for the system name.

    cout << "========================================\n"; // Print the top border of the system monitor.
    cout << "          SYSTEM MONITOR\n"; // Print the title of the system monitor.
    cout << "========================================\n"; // Print the separator below the title.
    cout << "System: " << systemName << "\n\n"; // Print the system name.
} // End of showSystemStatus function.

void checkMemory(int memoryUsage) // Checks the current memory status of the system.
{ // Start of checkMemory function.
    cout << "Memory Usage: " << memoryUsage << "%\n"; // Print the current memory usage.

    if (memoryUsage > 80) // Check if memory usage is above the threshold.
    { // Start of if block for high memory usage.
        // This variable only exists inside this if block. It stores the warning message.
        string warning = "WARNING: High memory usage!"; // Store the warning message.

        cout << warning << "\n"; // Print the warning message.
    } // End of if block for high memory usage.
    else // If memory usage is not above the threshold.
    { // Start of else block for normal memory usage.
        // This variable only exists inside this else block. It stores the normal status message.
        string status = "Memory usage is normal.";

        cout << status << "\n"; // Print the normal status message.
    } // End of else block for normal memory usage.

    cout << "\n"; // Print a blank line for better readability.
} // End of checkMemory function.

void runDiagnostics() // Runs a series of system diagnostics to check overall system health.
{ // Start of runDiagnostics function.
    // Local variable resets every time this function runs.
    int localCount = 0; // Initialize the local count variable.

    // Static variable remembers its value between function calls.
    static int totalCount = 0; // Static variable remembers its value between function calls.

    localCount++; // Increment the local count.
    totalCount++; // Increment the total count.

    cout << "Running system diagnostics...\n"; // Indicate that diagnostics are running.
    cout << "Local Count: " << localCount << "\n"; // Print the local count.
    cout << "Total Count: " << totalCount << "\n"; // Print the total count.
    cout << "All systems are functioning normally.\n\n"; // Print the diagnostic result.
} // End of runDiagnostics function.

void displayFooter() // Displays the footer of the system monitor.
{ // Start of displayFooter function.
    cout << "========================================\n"; // Print the separator above the footer.
    cout << "        END OF SYSTEM MONITOR\n"; // Print the footer title.
    cout << "========================================\n"; // Print the separator below the footer.
} // End of displayFooter function.
