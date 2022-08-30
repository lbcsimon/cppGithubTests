//
// Created by 15913 on 2022/8/30.
//

#include "SimpleHelloTest.h"
#include <iostream>
#include "..\Hello.h"
int main() {
    if (Hello().SayHi() == "Hello World"){
        std::cout << "Hello World Test Pass!" << std::endl;
        return 0;
    }
    else
        std::cout << "Hello World Test Failed!" << std::endl;
    return 1;
}



