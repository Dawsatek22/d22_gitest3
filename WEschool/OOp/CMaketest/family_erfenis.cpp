#include <iostream>
#include <string>
class family {

public:
int f1;
int f2;
int f3;

};

class zoon:public family {
    public:
std::string z1;
std::string z2;
std::string z3;
void barst( int f1,std::string z1, int f2,std::string z2,int  f3, std::string z3) {

   std::cout <<f1<<z1<<f2<<z2<<f3<<z3<< '\n';
}
};

int main() {

zoon b;
b.barst(20,"is 1e ",18,"is 2e ",9,"3e is het ");


}