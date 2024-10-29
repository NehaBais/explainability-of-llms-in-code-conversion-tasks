The provided Golang code can be translated into C++ like this -

```cpp
#include<iostream>
#include<string>

void match(std::string first, std::string second) {
    std::cout << "1. "<<first<<" starts with "<<second<<": ";
    if (first.find(second) == 0) 
        std::cout << "true\n";
    else 
        std::cout << "false\n";
    
    std::size_t found = first.find(second);
    std::cout << "2. "<<first<<" contains "<<second<<": ";
    if (found != std::string::npos) 
        std::cout << "true\n";
    else 
        std::cout << "false\n";
    
    if (found != std::string::npos){
      std::cout<<"2.1. at location "<<found<<", \n";
      
      int i = found + 1;
      while((found = first.find(second,i)) != std::string::npos) {
          std::cout << "2.2. at location " << found << ", ";
          // Move to next position after match
          i = found+1; 
      }
      
      std::cout<<"\b\b\b\n2.2. and that's all.\n";  
    }
    
    std::cout << "3. "<<first<<" ends with "<<second<<": ";
    if (first.rfind(second) == first.length() - second.length()) 
        std::cout << "true\n";
    else 
        std::cout << "false\n";    
}

int main() {
   match("abracadabra", "abr");
   return <｜begin▁of▁sentence｜>0;
}
```
This C++ code performs the same three types of string matching as your Golang version. It uses find, rfind and length functions from C++'s <string> library to achieve this. The `find` function returns the position of the first occurrence of substring in main string while `rfind` returns a position of last occurrence of substring in main string.

