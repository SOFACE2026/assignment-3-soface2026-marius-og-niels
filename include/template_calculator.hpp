#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // Implement this:
    T sum(T a, T b) {
        int res = a + b; // plusser a og b sammen.
        
        // her laver vi besken
        std::stringstream ss;
        ss << "taking the sum of: " << a << " and " << b << " which is " << res;
        
        // her loggger beskeden
        logger->log(ss.str());
        
        return res;
        }

        // Implement this:
        T multiply(T a, T b) {
            int res = a * b; // ganger a og b sammen.
            
            // her laver vi besken
            std::stringstream ss;
            ss << "taking the product of: " << a << " and " << b << " which is " << res;
            
            // her loggger beskeden
            logger->log(ss.str());
            
            return res;
        }

private:
    Logger *logger;
};