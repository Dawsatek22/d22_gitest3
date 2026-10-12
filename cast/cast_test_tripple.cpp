#include <iostream>
int int_val1 = 222,int_val2 = 20,int_val3 = 30; // Zijn de integer waarde
float fl_val1 =2.70,fl_val2 = 4.40,fl_val3 = 0.2; // Zijn de float waarde.
float fl_tel;
double tel1;
double tel2;

int main() {
tel1 = fl_val1 - int_val1;

std::cout << "tel1 is nu " << tel1 << '\n';
tel1 = static_cast<int>(tel1) ;

std::cout << "tel1 is nu met cast: " << tel1 << '\n';


}