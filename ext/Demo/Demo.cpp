//
// Created by Yuanzhen Zhou on 2020/7/2.
//

#include "Demo.h"

Demo::Demo(void) {
    std::cout << "Demo object is being created" << std::endl;
}

Demo::~Demo(void) {
    std::cout << "Demo object is being deleted" << std::endl;
}

void Demo::setName(std::string name) {
    myname = name;
}

std::string Demo::getName(void) {
    return myname;
}
