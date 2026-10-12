#include <iostream>
#include <memory>
#include <unistd.h>
int* p;
int val  = 0;

int main () {

using namespace std;


while (val < 20)
{
p = new int[val];
cout << "p is now " << p << '\n';
val += 1;
sleep(2);
}



}