#include <iostream>
#include "single_thread/single_logic.h"

std::unique_ptr<single_logic> single_logic::instance = nullptr;

single_logic::single_logic() {}

void single_logic::display()
{
    std::cout << "Singleton instance." << std::endl;
}

single_logic& single_logic::getSingleton()
{
    if (instance == nullptr)
    {
        instance = std::unique_ptr<single_logic>(new single_logic());
    }
    return *instance;
}
