#include "Date.hpp"
#include <iostream>
#include <ctime>

Date::Date(void) {
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
    std::string str(buffer);

    _current_day = str.substr(0, str.find(" "));
    _current_time = str.substr(str.find(" ") + 1);    
}

Date::Date(Date const & src) {
    *this = src;
}

Date::~Date(void) {
    
}

Date &	Date::operator=(Date const & rhs) {
    (void)rhs;
    return *this;
}

std::string	Date::today(void) const {
    return this->_current_day;
}

std::string	Date::now(void) const {
    return this->_current_time;
}

std::string	Date::getFormattedInfo(void) const {
    std::string formattedString = "Day: " + this->_current_day 
        + "\n  Time: " + this->_current_time;
    
    return formattedString;
}