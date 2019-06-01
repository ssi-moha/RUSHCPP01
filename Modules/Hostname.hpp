#ifndef HOSTNAME_H
# define HOSTNAME_H
# include "IMonitorModule.hpp"
# include <string>

class Hostname : public IMonitorModule {

public:

    Hostname( void );
    Hostname(Hostname const & src);
    ~Hostname( void );

    Hostname &  operator=(Hostname const & rhs);

    std::string    getHostname(void) const;

private:

    std::string _hostname;

};

#endif