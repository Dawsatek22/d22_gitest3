#include <iostream>
#include <string>
using namespace std;

class erfenis
{
    public:
    int b1 = 1000;
    int b2 = 2000;
    void  erft() {
        cout << "de je erft van bezit 1:"<< b1 << "en ook nog van  bezit 2: "<<b2<<"samen is dat dan:"<<'\n';

    
    
    }
};

class erfenaar: public erfenis
{

public: 
string a1 = "dat is het";
};


int main() {

erfenaar p;
p.erft();

}