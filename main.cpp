#include "Modules/Hostname.hpp"
#include "Modules/Username.hpp"
#include "Modules/OsInfo.hpp"
#include "Modules/Date.hpp"

#include <iostream>
#include <ncurses.h>
#include <unistd.h>

#include "IMonitorDisplay.hpp"
#include "Modules/IMonitorModule.hpp"

int main()
{	
    std::vector<IMonitorModule*> moduleTab;

    moduleTab.push_back(new Hostname());
    moduleTab.push_back(new Username());
    moduleTab.push_back(new OsInfo());
    moduleTab.push_back(new Date());



    IMonitorDisplay display(moduleTab);
    
    display.run();
    
    return 0;
}