# include <iostream>





    class IntArray 
    {
    private:
        unsigned aantal;
        int * p;
    public:
        IntArray (unsigned n = 1); // Defaultconstructor
        ~IntArray(); // constructor
        void invoer();
        double gemiddelde()const;

    };
   
   int main() {
    std::cout << "Hoeveel getalllen wil je intikken? ";
    unsigned aantal;
    std::cin >> aantal;
    IntArray ia(aantal);
    ia.invoer();
    std::cout << "Het gemiddelde is " << ia.gemiddelde() << '\n';
    }
// implemntatie
    IntArray::IntArray(unsigned n) {
        p = new int[aantal];
        for (unsigned i = 0; i < aantal; i++)
    p[i] = 0;

}
IntArray :: ~IntArray() {
    std::cout << "Destructor van IntArray" << '\n';
delete[] p;
std::cin.get();
}


void IntArray::invoer() {
for (unsigned i = 0; i < aantal; i++ ) {
std:: cout << "Tik het maar " << (i + 1) << " E  hele mooie getal IN ";
std::cin >> p[i]; 
}
std::cin.get();
}
double IntArray::gemiddelde() const {
    int som = 0;
for (unsigned i = 0; i < aantal; i++ ) {


    som += p[i];
    return static_cast<double>(som) / aantal;
}

}
