#include <iostream>
#include <ctime>
#include <unistd.h>

time_t tstamp;


int main() {

std::cout <<"time stamp =" << ctime(&tstamp);
sleep(1);


}