#include <iostream>
#include <string.h>
using namespace std;
class f1 {

private:
int a1;

string a2;

public:
f1(string c2 ,int c1 ) {
  c1 = c1 * 10;
std::cout << c2 << c1 ;


};

};

int main() {

f1 test1("constructor value prints ",90);
return 0;
}