#include <iostream>
#include "include/single_thread/single_logic.h"

std::unique_ptr<single_logic> single_logic::instance = nullptr;

void single_logic::display()
{
    std::cout << "Singleton instance." << std::endl;
}

single_logic& single_logic::getSingleton()
{
    if (instance == nullptr)
    {
        instance = std::make_unique<single_logic>();
    }
    return *instance;
}