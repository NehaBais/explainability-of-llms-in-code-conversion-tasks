In C++, you can use `std::string` along with string slicing operations to achieve similar results. However, in C++ we start counting from 0 and the index of a character is given by its position not by its appearance order (unlike python). Here's the equivalent code for your provided Python script:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "abcdefgh";
    int n = 2, m = 3;
    char char_d = 'd', chars[] = {'c','d'};
    
    // starting from n=2 characters in and m=3 in length;
    std::cout << s.substr(n-1,m) << "\n";  

    // starting from n characters in, up to the end of the string;
    std::cout << s.substr(n-1) << "\n"; 
    
    // whole string minus last character;
    if (s.size() > 0) {
      std::cout << s.substr(0,s.size()-1) << "\n";  
    }
        
    // starting from a known character char="d" within the string and of m length;
    int indx = -1;
    for (int i = 0 ; i < s.size() && indx == -1; ++i){
        if(s[i]==char_d)
            indx = i;
    }  
    if (indx != -1) {
      std::cout << s.substr(indx,m) << "\n"; 
    }
      
    // starting from a known substring chars="cd" within the string and of m length.
    indx = -1;
    for (int i = 0 ; i < s.size()-1 && indx == -1; ++i){
        if(s[i]==chars[0] && s[i+1]==chars[1]) 
            indx=i;
    }  
    if (indx != -1) {
      std::cout << s.substr(indx,m) << "\n"; 
    }
      
return <｜begin▁of▁sentence｜>.size();
}
```
Please note that C++ does not support Unicode characters directly like Python, so it is handled internally by the compiler and operating system but the program can be run on any platform where these conventions are followed (like ASCII). If you need to work with Unicode strings in a cross-platform manner, please use libraries like ICU or Boost.

