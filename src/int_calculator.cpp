#include <sstream> // Hint to how you should build the message.

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{
    int res = a + b; // plusser a og b sammen.
    
    // her laver vi besken
    std::stringstream ss;
    ss << "taking the sum of: " << a << " and " << b << " which is " << res;
    
    // her loggger beskeden
    logger->log(ss.str());
    
    return res;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    int res = a * b; // ganger a og b sammen.
    
    // her laver vi besken
    std::stringstream ss;
    ss << "taking the product of: " << a << " and " << b << " which is " << res;
    
    // her loggger beskeden
    logger->log(ss.str());
    
    return res;
}