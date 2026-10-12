#include <iostream>


class Print {

private:
int a= 100;
public:
void printval(int val) {
    val = val/ a;
std::cout << " the value of we printing is:" << val <<'\n';

}

};

int main() {

Print t1;
t1.printval(1800);

}