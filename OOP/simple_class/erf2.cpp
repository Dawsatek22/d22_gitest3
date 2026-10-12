#include <iostream>
#include <string>

class familie {

    public: 
    int a_familie = 20;
    int b_familie = 10;


    void zonen (int z1) {

std::cout << "der zijn " << z1 << "zonen" << '\n';

    }

        void dochter (int d1) {

std::cout << "der zijn " << d1 << "dochters" << '\n';

    }
    private:

    int t1;
    int t2;


};


class stuur: public  familie {

public:
int s1;
int s2;
   

void stuursnel (int stuur1,int stuur2) {
 zonen(stuur1);
    dochter(stuur2); }
private:

int t2 = s2;


};



int main() {

stuur c1;
c1.stuursnel(99,88);
}
