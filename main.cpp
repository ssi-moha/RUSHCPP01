#include "Modules/Hostname.hpp"
#include "Modules/Username.hpp"
#include <iostream>
#include <ncurses.h>
#include <unistd.h>

#include "IMonitorDisplay.hpp"
#include "Modules/IMonitorModule.hpp"

int main()
{	
    std::vector<IMonitorModule> moduleTab;
    IMonitorDisplay display(moduleTab);

    display.run();

    return 0;
}