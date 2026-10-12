# include <iostream>
# include <string>
int val1 = 200;
int val2 = 334;
int val3 = 50;
int val4 = 99;
const int aantal{4};

int val [aantal] = {val1,val2,val3,val4}, *p;


int main() {
   p = val;
for (int i  = 0; i < aantal; i++)
{
    
   std::cout <<  *p<< "the value is now : "<< '\n';
   *p++;
}



}