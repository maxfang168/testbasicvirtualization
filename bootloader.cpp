#include "install.hpp"
#include <cstdlib>
int main()
{
    if(_INSTALL_DOT_HPP_CREATE_FILES() == false) {
        std::cerr << "FATAL ERROR DURING INSTALL";
    }
}