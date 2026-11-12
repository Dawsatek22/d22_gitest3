#include <iostream>
#include <string>

struct test1
{
    int waarde ;
    int prijs;
};
int  waardeer (struct test1 w1 )

{

std::cout << "waarde is nog "<< w1.waarde << '\n';
std::cout << "prijs is wel" << w1.prijs  << '\n';

return 0;
}

int main() {

struct test1 geef;
geef.prijs = 50;
geef.waarde = 250;
waardeer(geef);


}