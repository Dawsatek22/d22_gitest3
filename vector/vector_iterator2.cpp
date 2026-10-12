#include <iostream>
#include <vector>
#include <unistd.h>
int a;
int main() {
std::vector <int> v1;
for (a = 0; a < 10; a++)
v1.push_back(a * 20);

for (auto pos = v1.begin(); pos != v1.end()-2; ++pos)
std::cout << *pos <<"  ";
sleep(1);
std::cout << " a inhoud is "<< a;


}