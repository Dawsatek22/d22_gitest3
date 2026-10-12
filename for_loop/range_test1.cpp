#include <iostream>
#include <unistd.h>
int lijst[] {20,88,99,55,77};
int main() {

for (auto&lees : lijst) {
lees +=10; 
std::cout << "ik lees " <<lees<< '\n';
sleep(3);
}

}