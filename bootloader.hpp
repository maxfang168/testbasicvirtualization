#include "install.hpp"
#include <cstdlib>
bool _BOOTLOADER_DOT_HPP()
{
    if(_INSTALL_DOT_HPP_CREATE_FILES() == false) {
        std::cerr << "FATAL ERROR DURING INSTALL - read & write failure";
        return false;
    }
    return true;
}