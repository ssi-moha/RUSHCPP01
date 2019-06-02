#include "Hostname.hpp"
#include <iostream>
#include <unistd.h> 
#include <limits.h> 


Hostname::Hostname(void) {
    char hostname[64];
    
    gethostname(hostname, 64);
    
    _hostname = hostname;
}

Hostname::Hostname(Hostname const & src) {
    *this = src;
}

Hostname::~Hostname(void) {
    
}

Hostname &	Hostname::operator=(Hostname const & rhs) {
    (void)rhs;
    return *this;   
}

std::string	Hostname::getHostname(void) const {
    return this->_hostname;
}

std::string	Hostname::getFormattedInfo(void) const {
    std::string formattedString = "Hostname: " + this->_hostname;

    return formattedString;
}
