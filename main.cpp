#include <fstream>
#include <map>

#include "Modules/Hostname.hpp"
#include "Modules/Username.hpp"
#include "Modules/OsInfo.hpp"
#include "Modules/Date.hpp"

#include <iostream>
#include <ncurses.h>
#include <unistd.h>

#include "IMonitorDisplay.hpp"
#include "Modules/AMonitorModule.hpp"

std::vector<AMonitorModule*>* readConfigFile(char *filename) {
    std::string line;
    std::vector<AMonitorModule*> *moduleTab = new std::vector<AMonitorModule*>();
    std::ifstream configFile (filename);
    
    if (configFile.is_open()) {

        while (getline(configFile, line)) {
            std::cout << line << std::endl;    
            if (!line.compare("hostname")) {
                moduleTab->push_back(new Hostname());
            } else if (!line.compare("username")) {
                moduleTab->push_back(new Username());
            } else if (!line.compare("osinfo")) {
                moduleTab->push_back(new OsInfo());
            } else if (!line.compare("date")) {
                moduleTab->push_back(new Date());
            }
        }
        configFile.close();
    }
    else std::cout << "Unable to open file" << std::endl; 

    return moduleTab;
}

int main(int ac, char **av)
{	    
    if (ac < 2) {
        std::cout << "No config file." << std::endl;
    }
    std::vector<AMonitorModule*> *moduleTab = readConfigFile(av[1]);
    IMonitorDisplay display(*moduleTab);
    
    display.run();

    delete moduleTab;
    return 0;
}