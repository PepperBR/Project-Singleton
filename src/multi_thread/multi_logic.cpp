#include <iostream>
#include "multi_thread/multi_logic.h"
#include <mutex>

std::mutex multi_logic::mutex;

std::unique_ptr<multi_logic> multi_logic::instance = nullptr;

multi_logic::multi_logic() {}

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
            instance = std::unique_ptr<multi_logic>(new multi_logic());
        }
    }
    return *instance;
}