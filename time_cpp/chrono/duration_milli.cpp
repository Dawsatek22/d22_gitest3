// this is a c++ to use chrono for duration in 1000 milliseconds in a for loop
#include <iostream>
#include <chrono>
#include <thread>
using namespace std::chrono;
std::chrono::microseconds milli = std::chrono::milliseconds(1000);
int main() {

for (int i = 0 ; i < 5;i++) {
std::cout<<"chrono is sleeping for 1 milliseconds and value of i is: " << i <<std::endl;
std::this_thread::sleep_for(milli);

}
std::cout << "duration is done";
}