//
// Created by 15913 on 2022/8/31.
//

#include "AddTest.h"
#include <iostream>
#include "../Exercise/Add.h"

int main(){

    if (Add().add(1, 2) == 3){

        std::cout << "Add Test Pass" << std::endl;
        return 0;
    }
    else{
        std::cout << "Add Test Failed"<< std::endl;
        return 1;
    }
}