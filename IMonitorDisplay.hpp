#ifndef IMONITORDISPLAY_H
# define IMONITORDISPLAY_H



# include <ncurses.h>
# include <vector>
# include "Modules/AMonitorModule.hpp"

class IMonitorDisplay {

public:

    IMonitorDisplay(std::vector<AMonitorModule*> _moduleTab);
    IMonitorDisplay(IMonitorDisplay const & src);
    ~IMonitorDisplay( void );


    IMonitorDisplay &  operator=(IMonitorDisplay const & rhs);
    void    display(std::vector<AMonitorModule*> _moduleTab);
    void    run();

private:

    std::vector<AMonitorModule*> _moduleTab;
    std::vector<WINDOW*> _windowTab;

};

#endif