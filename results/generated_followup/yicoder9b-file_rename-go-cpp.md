The error lies within the usage of `rename()` function, as it cannot be directly used with strings containing file names or paths. The second parameter should also be a null-terminated string.

A correct way to use this function is by declaring two character arrays and then assigning the string literals to these character arrays before passing them to the rename() function. 

The corrected code will look like:
```cpp
#include <iostream>
#include <cstdlib> // For rename()

int main(){
    char oldName[] = "input.txt";
    char newName[] = "output.txt";
  
    if (rename(oldName, newName) == 0){
        std::cout << "File renamed successfully!\n";
    } else {
        std::cout << "Failed to rename the file!\n";
    }
   
    return 0;
}
```
