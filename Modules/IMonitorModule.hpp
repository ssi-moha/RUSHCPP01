#ifndef IMONITORMODULE_H
# define IMONITORMODULE_H

class IMonitorModule {

public:

    IMonitorModule( void );
    //IMonitorModule();
    IMonitorModule(IMonitorModule const & src);
    ~IMonitorModule( void );

    IMonitorModule &  operator=(IMonitorModule const & rhs);

};

#endif