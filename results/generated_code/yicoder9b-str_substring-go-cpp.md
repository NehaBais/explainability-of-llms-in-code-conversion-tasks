Below is the equivalent C++ code for the Golang code you have provided. 

Please note that C++ doesn't natively support Unicode characters as easily as Go does, and string manipulation can be more complex due to the presence of different string encodings (e.g. UTF-8, UTF-16).
```cpp
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    string s = "ABCDEFGH";
    size_t n = 2, m = 3;
    cout << "Index:  01234567\n";
    cout << "String: " << s << endl;
    // starting from n characters in and of m length
    if(s.length() > n+m) {
        string substr = s.substr(n, m);
        cout << "Start " << n << ", length " << m << ":   " << substr << endl;
    } else{
        cout<< "Not enough characters starting from index " << n <<endl;  
    }
    // starting from n characters in, up to the end of the string
    if(s.length() > n){
         string substr = s.substr(n);
         cout << "Start " << n <<", to end:   " << substr<<endl;
     } else{
        cout<< "Not enough characters starting from index " << n <<endl;  
    } 
    // whole string minus the last character
    if (s.length() > 1) {
         string substr = s.substr(0, s.size()-1);
         cout << "All but last:      "<< substr<< endl; 
     } else{
        cout<< "Only single character in string :" << s <<endl;  
    }   
    // starting from a known character within the string and of m length
    size_t dx = s.find('D');
    if(s.length() > dx+m){
         string substr = s.substr(dx, m);
         cout << "Start 'D', length "<< m << ":  " << substr<<endl;
     } else{
        cout<< "Not enough characters starting from index " << n <<endl;  
    }   
    // starting from a known substring within the string and of m length
    size_t sx = s.find("DE");
    if(s.length() > sx+m){
         string substr = s.substr(sx, m);
         cout << `Start "DE", length ${m}:`<< substr<< endl; 
     } else{
        cout<< "Not enough characters starting from index " << n <<endl;  
    }   
    return 0;
}
```
