Sure, here is the equivalent C code for the given Java function: 

```c
#include <string.h> // Include the string handling library for using substrings

// Function to display a substring from n characters in and of m length
char* Substring(const char *str, int n, int m) {
    if (n > strlen(str)) return "Index out of range"; 
    else if (m < 0 || n + m > strlen(str)) return "Invalid length";

    char* substring = (char*)malloc((m+1)*sizeof(char)); // Allocate memory for the string
    strncpy(substring, &str[n], m);  // Copy the substring into the allocated space
    substring[m] = '\0';  // Null terminate the string at end of copy
    return substring;
} 

// Function to display a substring starting from n characters in and of str length
char* Substring(const char *str, int n) {
    if (n > strlen(str)) return "Index out of range";
    else{
        return Substring(str, n, strlen(str)-2*n); // Call the above function with m=0 to create substring from n characters in
    }  
} 

// Function to display a substring from the whole string minus the last character
char* Substring(const char *str) {
    if (strlen(str) < 1) return "String too short"; // If str is less than 1 character long, return error
    else{
        return Substring(str, 0, strlen(str)-1);  // Call the above function with n=0 to create substring from the whole string minus the last character
    }   
} 

// Function to display a substring starting from a specific character in the string of length m
char* Substring(const char *str, char c, int m) {
    int index = -1;  // Variable to hold the position of the specified character
    for (int i=0; str[i]; ++i) 
        if (str[i] == c) {index = i; break;}  // Find and store the position of the character in str

    if (index == -1) return "Character not found"; // If the specified character is not in the string, return error
    else{
        return Substring(str, index, m); // Call the above function with m=0 to create substring from n characters in
    }  
} 

// Function to display a substring starting from a specific substring within the string of length m
char* Substring(const char *str, const char *sub, int m) {
    int index = -1; // Variable to hold the position of the specified substring
    if ((index = strstr(str, sub)) != NULL) return Substring(str, (int)(index-str), m); // Find and store the position of the substring in str
    else return "Substring not found"; // If the specified substring is not in the string, return error
}   
```
Remember to free any memory allocated for substring with `free(substring)` before it goes out of scope.
