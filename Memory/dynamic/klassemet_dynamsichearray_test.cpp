#include <iostream>

class IntArray {

private:
unsigned aantal;
int * p;
public:
IntArray(unsigned n = 1);
~IntArray();
void invoer();
double gemiddelde() const;
};

int main(){
    std::cout << "Hoeveel getallen wil je intikken? ";
    unsigned aantal;
    std::cin >> aantal;
    IntArray ia(aantal);
    ia.invoer();
    std::cout << "Het gemidelde is " << ia.gemiddelde() << '\n';

}

IntArray::IntArray(unsigned n)
: aantal{n} {
    p = new int[aantal];
    for (unsigned i = 0; i < aantal; i++ )
    p[i] = 0;


}
IntArray::~IntArray() {

std::cout << "Destructor van IntArray" << '\n';
delete[] p;
std::cin.get();

}
void IntArray::invoer() {
for(unsigned i = 0; i < aantal; i++) {
std::cout <<"Tik het " << (i + 1) << "e getal in ";
}
std::cin.get();

}
double IntArray::gemiddelde() const {
int som = 0;
for (unsigned i = 0; i < aantal; i++)
som += p[i];
return static_cast<double>(som) /aantal;
}

