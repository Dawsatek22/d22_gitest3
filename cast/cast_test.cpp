#include <iostream>


int main() {


int teller = 3, noemer = 4; // declareer de teller en de noemer.
double uitkomst1, uitkomst2; // zet uitkomst1 en uitkomst2.
uitkomst1 = teller / noemer; // rekent de teller en de noemer in uitkomst1.
uitkomst2 = static_cast<double>(teller) / noemer;  // zet de int teller resultaat om in een double.
std::cout << "zonder cast:" << uitkomst1 << '\n'; // print de uikomst uit zonder cast.
std::cout << "Met cast " << uitkomst2 << '\n'; // print de uitkomst uit met casr.

}