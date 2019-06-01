

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay(std::vector<IMonitorModule> moduleTab) : _moduleTab(moduleTab) {
    initscr();

    for (unsigned int i = 0; i < moduleTab.size(); i++) {
        _windowTab.push_back(subwin(stdscr, LINES / moduleTab.size(), COLS, 0, 0));
        box(_windowTab[i], ACS_VLINE, ACS_HLINE);
        
    
        wrefresh(_windowTab[i]);
    }
}

IMonitorDisplay::~IMonitorDisplay() {

}

void    IMonitorDisplay::run() {


    WINDOW *haut;
    
    haut= subwin(stdscr, LINES / 2, COLS, 0, 0);        // Créé une fenêtre de 'LINES / 2' lignes et de COLS colonnes en 0, 0
    //bas= subwin(stdscr, LINES / 2, COLS, LINES / 2, 0); // Créé la même fenêtre que ci-dessus sauf que les coordonnées changent
    
    
    //wrefresh(bas);
    
    getch();
    endwin();
    
    //free(haut);
    //free(bas);


}
