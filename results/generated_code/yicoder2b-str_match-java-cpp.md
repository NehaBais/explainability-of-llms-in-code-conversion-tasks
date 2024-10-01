Below is the equivalent C++ code for your Java code.
```cpp
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "abcd";
    char str2[] = "ab"; 
    char str3[] = "abab";
    char str4[] = "zn";
    char str5[] = "bb";
    bool start_str, contains_str, ends_str;
    int loc1, loc2, loc3, loc4, loc5; 

    start_str = (strncmp(str1, str2, strlen(str2)) == 0); // It checks if first string starts with the second string
    cout << "Starts With: " << start_str << endl; 

    contains_str = (strchr(str3.c_str(), *str4) != NULL); // It checks if first string contains the second string anywhere in it
    cout << "Contains: " << contains_str << endl; 

    ends_str = (strncmp(str1, str4, strlen(str4)) == 0); // It checks if first string ends with the second string
    cout << "Ends With: " << ends_str << endl;  

    loc1 = strchr(str3.c_str(), *str5) - str3.c_str(); // Get the location of 'bb' in the first string
    loc2 = strchr(str3.c_str(), *str4) - str3.c_str(); // Get the location of 'ab' in the first string
    loc3 = strstr(str3.c_str() + loc1 + 1, str5.c_str()) - (str3.c_str() + loc1 + 1);  // Get the next occurrence of 'bb' from current location of 'ab' in first string
    loc4 = strchr(str3.c_str(), *str2) - str3.c_str(); // Get the location of 'ab' in first string
    loc5 = strpbrk(str3.c_str() + loc2, str5.c_str()) - (str3.c_str() + loc2); // Get the next occurrence of any character from current position in first string

    cout << "Locations: " << loc1 << "," << loc2 << "," << loc3 << "," << loc4 << "," << loc5 << endl; 

    return 0;
}
```
Please note that C++ does not have the same string matching functions as Java. Thus, for these methods, I used the `strchr()` function to find the first occurrence of a character in a string and `strpbrk()` to get the next occurrence from a specific character. These functions return pointers to the location in memory where the character is stored so I have subtracted 'c_str()' which converts the character array to char* for the pointer arithmetic operation. The `strncmp()` function compares two strings and returns 0 if they are identical and their lengths differ; a non-zero value indicates that the strings are different.
