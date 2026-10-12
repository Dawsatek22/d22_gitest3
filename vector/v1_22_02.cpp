#include <iostream>
#include <vector>
#include <unistd.h>
int i = 20;

int main() {
    std::vector<int> v1;
for (i = v1.begin(); i < v1.end(); i++) {

    std::cout << "eerste for loop is:" << i<< '\n';
    sleep(2);
}
;



}