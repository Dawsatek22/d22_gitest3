#include <iostream>
#include <vector>


int main() {
std::vector <int> v;
for (int i = 0; i < 10; ++i)
v.push_back(i *5);
for (auto pos = v.begin(); pos != v.end(); ++pos)
std::cout << *pos << " ";
std::cout << '\n';



}