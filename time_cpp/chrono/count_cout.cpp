// this is a c++ to use chrono for duration to test the seconds without namespace
#include <iostream>
#include <chrono>
#include <thread>

std::chrono::seconds s(2) ;
int main() {


std::cout<<"chrono is " <<s.count() << std::endl;

std::cout << "duration is done";

}