#ifndef USERNAME_H
# define USERNAME_H
# include <string>
# include "IMonitorModule.hpp"

class Username : public IMonitorModule {

public:

    Username( void );
    Username(Username const & src);
    ~Username( void );

    Username &  operator=(Username const & rhs);

    std::string    getUsername(void) const;

private:

    std::string _username;

};

#endif