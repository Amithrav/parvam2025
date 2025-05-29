#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>

// Function to log activity with timestamp
void logActivity(const std::string &activity, const std::string &filename)
{
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open())
    {
        // Get current time
        std::time_t now = std::time(nullptr);
        std::string dt = std::ctime(&now);

        // Remove newline character from the end
        if (!dt.empty() && dt.back() == '\n')
            dt.pop_back();

        // Write log entry
        outFile << "[" << dt << "] " << activity << "\n";
        outFile.close();
        std::cout << "Activity logged.\n";
    }
    else
    {
        std::cout << "Unable to open log file.\n";
    }
}

// Function to read and display log file content
void readLog(const std::string &filename)
{
    std::ifstream inFile(filename);
    if (inFile.is_open())
    {
        std::string line;
        std::cout << "Activity Log:\n";
        while (std::getline(inFile, line))
        {
            std::cout << line << "\n";
        }
        inFile.close();
    }
    else
    {
        std::cout << "Unable to open log file.\n";
    }
}

int main()
{
    std::string filename = "activity.log";

    logActivity("User logged in", filename);
    logActivity("User performed an action", filename);

    readLog(filename);

    return 0;
}