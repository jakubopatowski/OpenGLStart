#include "hello.hpp"
#include <iostream>
#include "config.hpp"

void hello(){
    std::cout <<"Project name: " << CMakeVars::project_name << '\n';
    std::cout <<"Project version: " << CMakeVars::project_version << '\n';
}