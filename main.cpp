#include <iostream>
#include "install.hpp"
#include "bootloader.hpp"
#include <cstdlib>

int main() {
    if (_BOOTLOADER_DOT_HPP() == false) {
        std::cout << std::endl << "Bootloading process has encountered fatal error - read & write failure." << std::endl;
    }
    return 0;
}