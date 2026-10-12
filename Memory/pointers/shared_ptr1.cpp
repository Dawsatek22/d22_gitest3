#include <iostream>
#include <memory>
#include <sstream>


class Student {

private:
std::string naam , opleiding, geslacht;
int nummer;

public:
Student(std::string n ,std::string opl, std::string gesl, int nr) : naam{n}, opleiding{opl}, geslacht{gesl}, nummer{nr} {
}
std::string to_string() const {

std::ostringstream os;
os << naam << ", " << opleiding << ", " << geslacht;
os << ", " << nummer << '\n';
return os.str();


}
};

int main() {

std::shared_ptr<Student> sp{new Student{"Gertjan",
"Math","M",313,
}};
std::cout << sp->to_string() << '\n';



}