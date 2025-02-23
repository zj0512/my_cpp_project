#include <iostream>

int main() {
    int a = 0;
    int b = 1;

    for (int i = 0; i < 10; i ++) {
        b = b + a + b;
    }

    std::cout << b << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}