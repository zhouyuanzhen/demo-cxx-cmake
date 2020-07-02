//
// Created by Yuanzhen Zhou on 2020/7/2.
//

#ifndef CMAKE_CXX_DEMO_DEMO_H
#define CMAKE_CXX_DEMO_DEMO_H

#include <iostream>

class Demo {
    public:
        void setName(std::string name);
        std::string getName(void);
        Demo();   // 构造函数声明
        ~Demo();  // 析构函数声明

    private:
        std::string myname;
};


#endif //CMAKE_CXX_DEMO_DEMO_H
