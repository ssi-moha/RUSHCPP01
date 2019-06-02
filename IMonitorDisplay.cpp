

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay(std::vector<IMonitorModule> moduleTab) : _moduleTab(moduleTab) {
    initscr();
    display(moduleTab);
}

IMonitorDisplay::~IMonitorDisplay() {

}

void    IMonitorDisplay::display(std::vector<IMonitorModule> moduleTab) {


    
    int line = 0;
    int col = 0;

    int moduleWidth = 30;
    int moduleHeigth = LINES / (1 + ((moduleTab.size() + 1) * moduleWidth / COLS ));

    for (unsigned int i = 0; i <= moduleTab.size(); i++) {
        _windowTab.push_back(subwin(stdscr, moduleHeigth , moduleWidth , line * moduleHeigth , col * moduleWidth  ));
        box(_windowTab.back(), ACS_VLINE, ACS_HLINE) ;
        mvwprintw(_windowTab.back(), 1,1, "%d",   1 + ((moduleTab.size() + 1) * moduleWidth / COLS ));
        wrefresh(_windowTab[i]);
        col++;
        if (col * moduleWidth > COLS)
        {
            col = 0;
            line++;
        }
    }


}

void    IMonitorDisplay::run() {


    //WINDOW *haut;
    
    //haut= subwin(stdscr, LINES / 2, COLS, 0, 0);        // Créé une fenêtre de 'LINES / 2' lignes et de COLS colonnes en 0, 0
    //bas= subwin(stdscr, LINES / 2, COLS, LINES / 2, 0); // Créé la même fenêtre que ci-dessus sauf que les coordonnées changent
    
    
    //wrefresh(bas);
    
    getch();
    endwin();
    
    //free(haut);
    //free(bas);


}
