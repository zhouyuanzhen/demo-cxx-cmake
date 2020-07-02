#include "Demo.h"

Demo::Demo() {
    std::cout << "Demo object is being created" << std::endl;
}

Demo::~Demo() {
    std::cout << "Demo object is being deleted" << std::endl;
}

void Demo::setName(std::string name) {
    myname = name;
}

std::string Demo::getName() {
    return myname;
}
