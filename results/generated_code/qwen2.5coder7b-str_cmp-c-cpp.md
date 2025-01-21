```cpp
#include<iostream>
#include<string>

using namespace std;

#define STRCEQ(A,B) (A.compare(B)==0)
#define STRCNE(A,B) (!STRCEQ(A,B))
#define STRCLT(A,B) (A.compare(B)<0)
#define STRCLE(A,B) (A.compare(B)<=0)
#define STRCGT(A,B) STRCLT(B,A)
#define STRCGE(A,B) STRCLE(B,A)

void compare(const string&a, const string&b) {
  cout << a << " ";
  cout << boolalpha;
  cout << STRCEQ(a,b) << " "
       << STRCNE(a,b) << " "
       << STRCGT(a,b) << " "
       << STRCLT(a,b) << " "
       << STRCGE(a,b) << " "
       << STRCLE(a,b)
       << " " << b << endl;
}
void comparecase(const string&a, const string&b) {
  cout << a << " ";
  cout << boolalpha;
  cout << STRCEQ(a,b) << " "
       << STRCNE(a,b) << " "
       << STRCGT(a,b) << " "
       << STRCLT(a,b) << " "
       << STRCGE(a,b) << " "
       << STRCLE(a,b)
       << " " << b << " ignoring case" << endl;
}
int main() {
  string a, b;
  cout << "eq , ne , gt , lt , ge , le" << endl;
  while (cin >> a >> b) {
    compare(a, b);
    comparecase(a, b);
  }
  return 0;
}
```
