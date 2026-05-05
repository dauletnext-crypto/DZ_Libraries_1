#include <iostream>
#include <string>
#include "Greeter.h"

int main() {
    

    Greeter greeter;
    std::string name;

    std::cout << "Enter mane: ";
    std::cin >> name;

    std::cout << greeter.greet(name) << std::endl;



	return 0;
}