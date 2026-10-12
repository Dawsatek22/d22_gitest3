
// this is a c++ code to test the time fuction in c++
#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
int i1 = 0;

int i2 = 0;
// creates timers objects below
std::chrono::milliseconds t1(1000); // timer1
std::chrono::milliseconds t2(1000); // timer2
int main() {
while (i1 <25) // while loops for the integer
{
// if statements below
if (i1 < 24) {
i1 += 1;
std::cout << "i1 is: " << i1<< '\n';
std::this_thread::sleep_for(t1);
}
if (i1 < 8) {
std::cout<<"i2 is also "<<i2<<'\n';
i2 += 1;
std::this_thread::sleep_for(t2);

}
if (i1 == 20) {
std::cout <<"timer is done"<<'\n';
break;

}}}

