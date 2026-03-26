#pragma once
#include <mutex>
#include <memory>

class multi_logic {
private:
    multi_logic();  
    static std::unique_ptr<multi_logic> instance;
    static std::mutex mutex;

public:
    static multi_logic& getSingleton();
    void display(); 
};