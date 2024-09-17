The provided code is already written in C. Here it is without any change. But if you want to write it in C++, consider the following conversion:

```cpp
#include<iostream>
using namespace std;
void bitwise(int a, int b) {
  cout << "a and b: " << (a & b)<<endl;
  cout << "a or b: "  << (a | b)<<endl;
  cout << "a xor b: " << (a ^ b)<<endl;
  cout << "not a: "   << ~a<<endl;
  cout << "a << n: "  << (a << b)<<endl;   // left shift
  cout << "a >> n: "  << (a >> b)<<endl;  // on most platforms: arithmetic right shift
                                    
  unsigned int c = a;                        // convert the signed integer into unsigned, so it will perform logical shift
  cout << "c >> n: "  << (c >> b)<<endl;    // logical right shift

}
unsigned int left_rotate(unsigned int value, int shift) 
{
   if ((shift &= sizeof(value)*8 - 1) == 0)
       return value;
   return (value << shift) | (value >> (sizeof(value)*8 - shift));
}
unsigned int right_rotate(unsigned int value, int shift) 
{
   if ((shift &= sizeof(value)*8 - 1) == 0)
       return value;
   return (value >> shift) | (value << (sizeof(value)*8 - shift));
}
int main() {
    int a = 5, b=2; // sample inputs
    bitwise(a,b);   // for bitwise operations
    cout<<"Left Rotation : " << left_rotate(a,b)<<endl;  // for left rotate
    cout<<"Right Rotation: "<< right_rotate(a,b)<<endl;  // for right rotate
}
```

