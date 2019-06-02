#ifndef OSINFO_H
# define OSINFO_H
# include <string>
# include "AMonitorModule.hpp"


class OsInfo : public AMonitorModule {

public:

    OsInfo( void );
    OsInfo(OsInfo const & src);
    ~OsInfo( void );

    OsInfo &  operator=(OsInfo const & rhs);

    std::string         getMachine( void ) const ;
    std::string         getNodename( void ) const ;
    std::string         getRelease( void ) const ;
    std::string         getSysname( void ) const ;
    std::string         getVersion( void ) const ;
    virtual std::string getFormattedInfo( void ) const;

private:

    std::string _machine;
    std::string _nodename;
    std::string _release;
    std::string _sysname;
    std::string _version;

};

#endif