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

    std::cout << hostname.getFormattedInfo() << std::endl;
    std::cout << username.getFormattedInfo() << std::endl;
    std::cout << osInfo.getFormattedInfo() << std::endl;
    std::cout << date.getFormattedInfo() << std::endl;
    
    return 0;
}