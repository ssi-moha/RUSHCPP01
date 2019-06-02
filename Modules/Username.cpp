#include "Username.hpp"
#include <iostream>
#include <limits.h>
#include <unistd.h>

Username::Username(void) {
    char username[64];
    getlogin_r(username, 64);
    _username = username;
}

Username::Username(Username const & src) {
    *this = src;
}

Username::~Username(void) {
    
}

Username &	Username::operator=(Username const & rhs) {
    (void)rhs;
    return *this;
}

std::string	Username::getUsername(void) const {
    return this->_username;
}

std::string	Username::getFormattedInfo(void) const {
    std::string formattedString = "Username: " + this->_username;

    return formattedString;
}
