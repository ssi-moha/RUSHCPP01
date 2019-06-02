#ifndef HOSTNAME_H
# define HOSTNAME_H
# include "AMonitorModule.hpp"
# include <string>

class Hostname : public AMonitorModule {

public:

    Hostname( void );
    Hostname(Hostname const & src);
    ~Hostname( void );

    Hostname &  operator=(Hostname const & rhs);

    std::string         getHostname( void ) const;
    virtual std::string getFormattedInfo( void ) const;

private:

    std::string _hostname;

};

#endif