#include <iostream>
#include<vector>
void print (const std::vector<int>& v );

int main()
{
    std::vector<int> rij(9);

    for(unsigned int i = 2; i <10; i++)
    rij[i] = 2 * i;

   // std::cout <<<< "Inhoud: "<< '\n' ;
    print(rij);

    




}

void print (const std::vector<int>& v ) {

auto pos = v.begin(), einde = v.end();
for (; pos != einde -1; ++pos)
std::cout << *pos << ", ";
 std::cout << *pos << '\n';

}