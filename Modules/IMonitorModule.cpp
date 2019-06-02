#include "IMonitorModule.hpp"

IMonitorModule::IMonitorModule(void) {
    
}

IMonitorModule::IMonitorModule(IMonitorModule const & src) {
    *this = src;
}

IMonitorModule::~IMonitorModule(void) {
    
}

IMonitorModule &	IMonitorModule::operator=(IMonitorModule const & rhs) {
    (void)rhs;
    return *this;   
}

std::string	IMonitorModule::getFormattedInfo( void ) const {
    std::string formattedString = "yo";

    return formattedString;
}