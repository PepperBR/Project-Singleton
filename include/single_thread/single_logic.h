#pragma once
#include <memory>

class single_logic {
private:
    single_logic();  
    static std::unique_ptr<single_logic> instance;
    
public:    
    static single_logic& getSingleton();
    void display();

    single_logic(const single_logic&) = delete;
    single_logic& operator=(const single_logic&) = delete;
};