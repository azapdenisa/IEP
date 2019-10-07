#ifndef HELLO_CONFIG_HPP
#define HELLO_CONFIG_HPP

#include <iostream>

#ifndef COPYRIGHT_INFO
#define COPYRIGHT_INFO "Copyright 03"
#endif

namespace hello {

///\brief Text to get displayed
const auto str_hello = ;
const auto str_timeis = ;
const auto str_goodbye = ;

inline void version()
{
    std::cout << "Application " << "" << std::endl 
              << "Version " << "" << std::endl 
              << COPYRIGHT_INFO << std::endl
              << std::endl;
}

} // namespace hello

#endif // HELLO_CONFIG_HPP
