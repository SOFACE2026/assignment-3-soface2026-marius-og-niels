#include "file_logger.hpp"
#include <fstream>
#include <iostream>

// Implement this:
// Constructor - Åbner filen.
FileLogger::FileLogger(std::string filename)
{
    logfile.open(filename);
}

// Implement this:
// Her skriver vi til filen hvis den er åben.
void FileLogger::log(std::string msg)
{
    if (logfile.is_open()) 
    {
        logfile << msg << std::endl;
    }
}

// Implement this:
// Destructor den gode gamle, som der lukker filen.
FileLogger::~FileLogger()
{
    if (logfile.is_open()) 
    {
        logfile.close();
    }
}