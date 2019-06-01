#include "Modules/Hostname.hpp"
#include "Modules/Username.hpp"
#include <iostream>

int main(void) {
    Hostname hostname;
    Username username;

    std::cout << hostname.getHostname() << std::endl;
    std::cout << username.getUsername() << std::endl;
    return 0;
}