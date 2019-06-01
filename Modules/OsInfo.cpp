#include <sys/utsname.h>
#include <iostream>
#include "OsInfo.hpp"

OsInfo::OsInfo(void) {
    struct utsname osName;
    int ret = 0;


    ret = uname(&osName);
    if (ret == -1) {
        std::cout << "OsInfo Error" << std::endl;
    } else {
        _machine = osName.machine;
        _nodename = osName.nodename;
        _release = osName.release;
        _sysname = osName.sysname;
        _version = osName.version;
    }
}

OsInfo::OsInfo(OsInfo const & src) {
    *this = src;
}

OsInfo::~OsInfo(void) {
    
}

OsInfo &	OsInfo::operator=(OsInfo const & rhs) {
    this->_machine = rhs.getMachine();
    this->_nodename = rhs.getNodename();
    this->_release = rhs.getRelease();
    this->_sysname = rhs.getSysname();
    this->_version = rhs.getVersion();

    return *this;   
}

std::string	OsInfo::getMachine(void) const {
    return this->_machine;
}

std::string	OsInfo::getNodename(void) const {
    return this->_nodename;
}

std::string	OsInfo::getRelease(void) const {
    return this->_release;
}

std::string	OsInfo::getSysname(void) const {
    return this->_sysname;
}

std::string	OsInfo::getVersion(void) const {
    return this->_version;
}