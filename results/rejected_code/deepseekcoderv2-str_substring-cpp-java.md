#include <iostream>
#include <string>
using namespace std;
int main() {
string s = "0123456789";
int const n = 3;
int const m = 4;
char const c = '2';
string sub = "456";
cout << s.substr(n,m)<<endl;
cout << s.substr(n)<<endl;
cout << s.substr(0,s.size()-1)<<endl;
cout << s.substr(s.find(c), m)<<endl;
cout << s.substr(s.find(sub),m);
return 0;
}

