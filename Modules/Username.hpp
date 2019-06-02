#ifndef USERNAME_H
# define USERNAME_H
# include <string>
# include "AMonitorModule.hpp"

class Username : public AMonitorModule {

public:

    Username( void );
    Username(Username const & src);
    ~Username( void );

    Username &  operator=(Username const & rhs);

    std::string     getUsername(void) const;
    virtual         std::string getFormattedInfo( void ) const;

private:

    std::string _username;

};

#endif