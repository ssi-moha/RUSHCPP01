#ifndef IMONITORDISPLAY_H
# define IMONITORDISPLAY_H

# include <vector>
# include "IMonitorModule.hpp"

class IMonitorDisplay {

public:

    IMonitorDisplay(std::vector<IMonitorModule> moduleTab);
    IMonitorDisplay(IMonitorDisplay const & src);
    ~IMonitorDisplay( void );

    IMonitorDisplay &  operator=(IMonitorDisplay const & rhs);


private:

    

};

#endif