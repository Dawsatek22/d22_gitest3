#include <iostream>
#include <vector>

void print(const std::vector<int>& v);

int main() {
std::vector<int> v;
std::cout << "begincapaiciteit" << v.capacity() << '\n';
std::cout << "aantal elementen: " << v.size() << '\n';

for(unsigned int i = 0; i < 5; i++)
v.push_back(2 * i);
 std::cout << "Inhoud: ";
  print(v);

 std::cout << "Aantal elementen: " << v.size() << '\n';
 std::cout << "Capiciteiten" << v.capacity() << '\n';


}

void print(const std::vector<int> v ) {
std::vector<int>::const_iterator pos, einde = v.end();
for (pos = v.begin(); pos  != einde - 1; ++pos)
std::cout << *pos << ",  ";
std::cout << *pos << '\n';


}