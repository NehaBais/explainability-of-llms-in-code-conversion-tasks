In C++, you can use `std::string` methods like replace() to achieve this functionality. Here's how it would be done:

```C++
#include <iostream>
#include <string>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";
    std::string replaced;
    
    // find the substring 'X' and replace it with string little
    size_t pos = 0; 
    while ((pos = original.find("X", pos)) != std::string::npos) {
        original.replace(pos, 1, little);
        pos += little.length(); // move the position forward for next search
    }
    
    replaced = original;
    
    std::cout << "Original: " << replaced << "\n";  
    
    return <｜begin▁of▁sentence｜>0; // Return code here is ignored in C++, but included for completeness. In a main() function this would be the value '0' to signify that everything ran correctly.
}
```
This program will output: `Mary had a little lamb`. It finds each occurrence of "X" and replaces it with "little". The find method returns std::string::npos if no match is found, so the while loop continues until there are no more "X"'s to replace in the string.

