#include "AMonitorModule.hpp"

AMonitorModule::AMonitorModule(void): _on(true) {

}

AMonitorModule::AMonitorModule(AMonitorModule const & src) {
    *this = src;   
}

AMonitorModule::~AMonitorModule(void) {
    
}

AMonitorModule &	AMonitorModule::operator=(AMonitorModule const & rhs) {
    (void)rhs;
    return *this;
}

bool	AMonitorModule::isOn(void) const {
    return this->_on;
}

void	AMonitorModule::setOn(void) {
    this->_on = true;
}

void	AMonitorModule::setOff(void) {
    this->_on = false;
}

