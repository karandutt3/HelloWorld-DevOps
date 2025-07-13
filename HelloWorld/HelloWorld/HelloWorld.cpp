#include "HelloWorld.h"
#include <iostream>
void HelloWorld::sayHello() const {
    std::cout << "Hello from HelloWorld class!" << std::endl;
}

void HelloWorld::sayGoodbye() const {
    std::cout << "Goodbye from HelloWorld class!" << std::endl;
}

int main() {
    HelloWorld helloWorld;
    helloWorld.sayHello();
    helloWorld.sayGoodbye();
    return 0;
}
