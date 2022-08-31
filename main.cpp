#include <iostream>
#include "Exercise/Hello.h"
#include "Exercise/Add.h"
int main() {
    std::cout << Hello().SayHi() << std::endl;
    std::cout << Add().add(1, 2) << std::endl;
    return 0;
}
