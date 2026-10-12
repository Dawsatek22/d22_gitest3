# include <iostream>
# include <string>


int val1 = 55;
int val2 = 99;
int val3 =888;
int val [3] {val1,val2,val3};
int main() {
int *p = val;
for (int i  = 0; i < 3;i++ ) {

    std::cout<<  p  << "Is the value " << '\n';
   
}

}