#include <iostream>
#include <unistd.h>

int main() {

for(int i = 2; i < 10; i++) {

std::cout << "value is " << i << "currently" << '\n';
sleep(1);

}


}