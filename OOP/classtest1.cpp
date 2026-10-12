#include <iostream>

class test1 {
private:
int store1 = 20;
float store2 = 88.7;
public:
int send1 = store1;
float send2 = store2;
};
int main () {
 test1 val;
std::cout << val.send2+val.send1 << "class value is now tested." << '\n';


}