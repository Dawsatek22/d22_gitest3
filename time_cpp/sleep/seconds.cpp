// this is c++ code to delay a for loop in seconds
#include <iostream>
#include <unistd.h>


int main() {

for(int i = 0; i < 10; i++) {

std::cout <<"the value of i is: "<< i << std::endl; // print the i value every 1 seconds
sleep(1);
}

std::cout << "loop has ended";
}