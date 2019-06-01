#include "Modules/Hostname.hpp"
#include "Modules/Username.hpp"
#include "Modules/OsInfo.hpp"
#include "Modules/Date.hpp"
#include <iostream>

int main(void) {
    Hostname hostname;
    Username username;
    OsInfo osInfo;
    Date date;

    std::cout << hostname.getHostname() << std::endl;
    std::cout << username.getUsername() << std::endl;
    std::cout << osInfo.getVersion() << std::endl;
    std::cout << date.today() << std::endl;
    std::cout << date.now() << std::endl;
    return 0;
}