#include <iostream>
#include "multi_thread/multi_logic.h"
#include <thread>
#include <mutex>

static std::mutex mutex;

void task1() {
    multi_logic& singletonA = multi_logic::getSingleton();
    std::lock_guard<std::mutex> lock(mutex);
    std::cout << "Endereço do singleton A: " << &singletonA << std::endl;
    singletonA.display();

}

void task2() {
    multi_logic& singletonB = multi_logic::getSingleton();
    std::lock_guard<std::mutex> lock(mutex);
    std::cout << "Endereço do singleton B: " << &singletonB << std::endl;
    singletonB.display();

}

void task3() {
    multi_logic& singletonC = multi_logic::getSingleton();
    std::lock_guard<std::mutex> lock(mutex);
    std::cout << "Endereço do singleton C: " << &singletonC << std::endl;
    singletonC.display();

    
}

void task4() {
    multi_logic& singletonD = multi_logic::getSingleton();
    std::lock_guard<std::mutex> lock(mutex);
    std::cout << "Endereço do singleton D: " << &singletonD << std::endl;
    singletonD.display();

}
int main() {
    std::thread t1(task1);
    std::thread t2(task2);
    std::thread t3(task3);
    std::thread t4(task4);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}