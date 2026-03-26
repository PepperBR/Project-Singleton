#pragma once

class single_logic {
private:
    single_logic();  
    static std::unique_ptr<single_logic> instance;

public:
    static single_logic& getSingleton();
    void display(); 
};