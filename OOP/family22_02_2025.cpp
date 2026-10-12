#include <iostream>
#include <string>

class family {
private:
int aantal;
int fam;
int leeftijd =14;
std::string ouder;
std::string kind;
public: 
int veelheid = aantal;
int gezin = fam;
int age = leeftijd;
std::string kinderen = kind;
std::string voogt = ouder;
};
class zoon: public family {
  
   
   public:

int a1 = veelheid;

  int meer = 99 ;

  private:
  int zoveel = meer;
};
int main() {
zoon k;
k.a1 = 200;
k.kinderen = "Het zijn 23jongens";
std::cout << k.a1 << k.meer << '\n';


}