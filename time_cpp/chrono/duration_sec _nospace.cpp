// this is a c++ to use chrono for duration to test the seconds without namespace
#include <iostream>
#include <chrono>
#include <thread>

std::chrono::seconds s(2);
int main() {

for (int i = 0; i < 10;i++) {
std::cout<<"chrono is sleeping for "<<s.count() <<"and i is:" << i <<std::endl;
std::this_thread::sleep_for(s);



}

std::cout << "duration is done";

}