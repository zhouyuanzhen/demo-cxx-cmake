#include <iostream>

#include "hello.h"
#include "Demo.h"

int main(void) {

    std::cout << "****************************************" << std::endl;

    say_hello();

    Demo *demo = new Demo();

    demo->setName("Zhou Yuanzhen");

    std::cout << "My name is: " << demo->getName() << std::endl;

    delete(demo);

    std::cout << "****************************************" << std::endl;

    return 0;
}
