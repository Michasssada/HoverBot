/*
implements a log function
to use it 
logger.new_log(string)
*/
#ifndef LOG_H
#define LOG_H
//libs needed
#include <iostream>
#include <fstream>
#include <ctime>
//class
class logger {
public:
    void new_log(const std::string& new_log);  // Pass by const reference
};

#endif
