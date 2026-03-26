#include <iostream>
#include "single_thread/single_logic.h"

int main ()
{
    single_logic& singletonA = single_logic::getSingleton();
    std::cout << "Endereço do singleton A: " << &singletonA << std::endl;
    singletonA.display();

    single_logic& singletonB = single_logic::getSingleton();
    std::cout << "Endereço do singleton B: " << &singletonB << std::endl;
    singletonB.display();

    single_logic& singletonC = single_logic::getSingleton();
    std::cout << "Endereço do singleton C: " << &singletonC << std::endl;
    singletonC.display();

    return 0;
}