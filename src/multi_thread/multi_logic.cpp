#include <iostream>
#include "include/multi_thread/multi_logic.h"

std::unique_ptr<multi_logic> multi_logic::instance = nullptr;

void multi_logic::display()
{
    std::cout << "Singleton instance." << std::endl;
}

multi_logic& multi_logic::getSingleton()
{
    if(instance == nullptr)
    {
        std::lock_guard<std::mutex> lock(mutex);

        if(instance == nullptr)
        {
            instance = std::make_unique<multi_logic>();
        }
    }
    return *instance;
}