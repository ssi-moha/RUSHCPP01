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