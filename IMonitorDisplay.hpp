#ifndef IMONITORDISPLAY_H
# define IMONITORDISPLAY_H

# include <ncurses.h>
# include <vector>
# include "Modules/IMonitorModule.hpp"

class IMonitorDisplay {

public:

    IMonitorDisplay(std::vector<IMonitorModule> _moduleTab);
    IMonitorDisplay(IMonitorDisplay const & src);
    ~IMonitorDisplay( void );

    IMonitorDisplay &  operator=(IMonitorDisplay const & rhs);

    void    run();

private:

    std::vector<IMonitorModule> _moduleTab;
    std::vector<WINDOW*> _windowTab;

};

#endif