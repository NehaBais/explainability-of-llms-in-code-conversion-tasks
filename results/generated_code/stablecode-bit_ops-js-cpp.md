Below is the JavaScript code converted to C++. Note that due to integer overflow issues with bitwise shifting, especially when dealing with large integers and performing multiple operations, additional error handling or data type limitations may need to be added.

```cpp
#include<iostream>
using namespace std;

void bitwise(int a, int b){
    cout<<"a AND b: " << (a & b)<<endl;
    cout<<"a OR b: " << (a | b)<<endl;
    cout<<"a XOR b: " << (a ^ b)<<endl;
    cout<<"NOT a: " << ~a << endl;
    if(b >= 0){
        cout<<"a << b: " << (a << b))<<endl; // left shift
    }else{
        cout<<"Error: negative value not allowed for right shift."<<endl;
    }

    if((b >= 0) && ((b & 32) == 0)){
        cout<<"a >> b: " << (a >> b))<<endl; // arithmetic right shift
    }else{
        cout<<"Error: either negative value or value greater than or equal to 32 not allowed for right shift."<<endl;
    }

    if((b >= 0) && ((b & 31) == 0)){
        cout<<"a >>> b: " << (a >> b))<<endl; // logical right shift
    }else{
        cout<<"Error: either negative value or value greater than or equal to 32 not allowed for right rotate."<<endl;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    bitwise(a, b);

    return 0;
}
```
