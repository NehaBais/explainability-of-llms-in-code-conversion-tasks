```
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    
    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    double division=a/b;
    int remainder=a%b; //This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator
    
    cout<<"a + b = "<<sum<<endl;  //The << syntax is used to output values to the console. The endl syntax is used to add a newline to the end of the output.
    cout<<"a - b = "<<difference<<endl;
    cout<<"a * b = "<<product<<endl;
    cout<<"a / b = "<<division<<endl;
    cout<<"a % b = "<<remainder<<endl;
    
    return 0;
}
```
Note: This is a basic conversion of the code from JavaScript to C++, there may be better ways to do this in C++.
Also, this code assumes that the input values are valid integers and will not handle errors or edge cases.
