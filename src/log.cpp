#include "log.h"

using namespace std;

void logger::new_log(const string &new_log)
{
    time_t currentTime = time(nullptr);// time var
    string timeStr = ctime(&currentTime); // Convert time to string
    timeStr.pop_back();// Remove the newline character form time string

    ofstream file("/home/a/robot_OS/log.txt", ios::app); //open log file in append mode
    if (file.is_open())
    {
        file << timeStr << ": " << new_log << endl; // Write log
    }
    else
    {
        cerr << "Error: Could not open file." << endl; // Error handling
    }
    file.close();
}
