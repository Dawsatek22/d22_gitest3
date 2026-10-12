#include <iostream>
#include <memory>
using namespace std;
#include <string>
class shr_class {
    
public: 

int a1 = 80;
int a2 = 200;

shr_class(int b1, int b2) {

cout << "value1 is"<< a1 + b2<< '\n';
cout << "value2 "<< a2 + b2<< '\n';
}




};

int main(){

shared_ptr<shr_class> sp{new shr_class{8,9}};
cout << "p is "<< sp << '\n';

}