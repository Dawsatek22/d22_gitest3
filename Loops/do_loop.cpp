// this is a code to increment a integer in a do_while loop until it reaches a certain number.
#include <iostream>
#include <unistd.h>

int a = 0; // is the integer tha is used for the do_while loop.


int main() {
// now the do_while loop initializing until int a reaches 10.
do {

a += 1;
std::cout << "a = "<< a << '\n'; // prints the the value out.
sleep(2);
} while (a < 10);


}