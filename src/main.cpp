#include <iostream>
#include <lame/lame.h>

int main() {
    lame_t lame = lame_init();
    std::cout << "Hello, World!" << std::endl;

    return 0;
}