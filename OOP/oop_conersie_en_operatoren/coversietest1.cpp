#include <iostream>
#include <sstream>

#include <string>

#define LaatZien

class Bewoner {

private:
std::string naam;
int huisnr;
public:
Bewoner() :
naam{}, huisnr{} {
#ifdef LaatZien
std::cout << "defaultconstructor" << '\n';
#endif
}

Bewoner(const char * naam, int nr = 0) :
naam{naam}, huisnr{nr}
 {
#ifdef LaatZien
std::cout << "constructor met string argument" << '\n';
#endif

 }
Bewoner(int nr)
    : naam{}, huisnr{nr} {


#ifdef LaatZien
std::cout << "constructor met int argument " << '\n';

#endif

    }
std::string to_string() const {



    std::ostringstream os;
    os << "huisnr " << huisnr << " naam: " << naam;
    return os.str();


}

};

int main() {
Bewoner b1,b2, b3;

b1 = 6;
b2 = "bommel";
b3 = b2;
std::cout << '\n' << "Inhoud van drie objecten is:" << '\n';

std::cout << b1.to_string() << '\n';
std::cout << b2.to_string() << '\n';
std::cout << b3.to_string() << '\n';


}