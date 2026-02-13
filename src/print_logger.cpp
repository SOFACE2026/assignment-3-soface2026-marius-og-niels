#include <iostream>

#include "print_logger.hpp"

// Printer til konsollen.
void PrintLogger::log(std::string message)
{
    std::cout << message << std::endl;    
}