#include <iostream>
#include <vector>


int main () {
std::vector<int> v; // lege vector
for (int i = 0; i < 10; ++i)
v.push_back(i * 20);
for (auto pos = v.begin(); pos != v.end(); ++pos )
std::cout << "Pos is nu : " << *pos <<  '\n';


}