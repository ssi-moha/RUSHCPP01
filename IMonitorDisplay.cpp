

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay(std::vector<AMonitorModule*> moduleTab) : _moduleTab(moduleTab) {
    initscr();
    display(moduleTab);
}

IMonitorDisplay::~IMonitorDisplay() {
    endwin();
}

void    IMonitorDisplay::display(std::vector<AMonitorModule*> moduleTab) {


    
    int line = 0;
    int col = 0;

    int moduleWidth = 30;
    int moduleHeigth = LINES / (1 + ((moduleTab.size() + 1) * moduleWidth / COLS ));

    this->_moduleTab = moduleTab;

    for (unsigned int i = 0; i < _moduleTab.size(); i++) {
        
        _windowTab.push_back(subwin(stdscr, moduleHeigth , moduleWidth , line * moduleHeigth , col * moduleWidth));
        box(_windowTab[i], ACS_VLINE, ACS_HLINE) ;
        if (_moduleTab[i]->isOn())
            mvwprintw(_windowTab[i], 1,2, "%s", _moduleTab[i]->getFormattedInfo().c_str() );

        wrefresh(_windowTab[i]);
        col++;
        if (col * moduleWidth > COLS - moduleWidth)
        {
            col = 0;
            line++;
        }
    }
}

void    IMonitorDisplay::run() {
    
    getch();
    
}
