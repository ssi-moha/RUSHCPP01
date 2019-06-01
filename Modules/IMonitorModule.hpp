#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

class IMonitorModule {

public:

    IMonitorModule( void );
    //IMonitorModule();
    IMonitorModule(IMonitorModule const & src);
    ~IMonitorModule( void );

    IMonitorModule &  operator=(IMonitorModule const & rhs);

};

#endif
