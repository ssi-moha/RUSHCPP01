#ifndef IMONITORMODULE_H
# define IMONITORMODULE_H
# include <string>

class IMonitorModule {

public:

    IMonitorModule( void );
    //IMonitorModule();
    IMonitorModule(IMonitorModule const & src);
    ~IMonitorModule( void );

    IMonitorModule &  operator=(IMonitorModule const & rhs);

    virtual std::string getFormattedInfo( void ) const = 0;

};

#endif