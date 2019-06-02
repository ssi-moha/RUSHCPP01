#ifndef AMONITORMODULE_H
# define AMONITORMODULE_H
# include "IMonitorModule.hpp"

class AMonitorModule: public IMonitorModule {

public:

    AMonitorModule( void );
    AMonitorModule(AMonitorModule const & src);
    ~AMonitorModule( void );

    AMonitorModule &  operator=(AMonitorModule const & rhs);

    bool        isOn(void) const;
    void        setOn( void );
    void        setOff( void );

private:

    bool _on;    

};

#endif