#include <iostream>
#include <vector>
using namespace std;


int main() {

vector<int> v;

for (int  i = 0; i < 5; i++) 

v.push_back(2 * i);
cout << "Inhoud v: " << '\n';
for (int i = 0; i < v.size(); i++ )
cout << v[i] << ' ';

vector<int> w(v.begin()+1, v.end()-1 );
cout << "Inhoud  W: ";
for  (int i = 0; i < w.size();  i++)
cout << w[i] << ' ';


}