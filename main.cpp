#include "Modules/Hostname.hpp"
#include "Modules/Username.hpp"
#include "Modules/OsInfo.hpp"
#include <iostream>

int main(void) {
    Hostname hostname;
    Username username;
    OsInfo osInfo;

    std::cout << hostname.getHostname() << std::endl;
    std::cout << username.getUsername() << std::endl;
    std::cout << osInfo.getVersion() << std::endl;
    return 0;
}