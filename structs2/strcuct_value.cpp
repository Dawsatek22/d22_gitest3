#include <iostream>
#include <string>
struct waarde{

    int a1 = 88;
    int a2 = 200;
    std::string s = "string from struct";
};


int main() {
waarde w;
std::cout <<"the value is: " << w.a2<< '\n';


}