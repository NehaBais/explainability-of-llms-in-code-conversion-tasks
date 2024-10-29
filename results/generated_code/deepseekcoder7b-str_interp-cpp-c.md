In C programming language, the standard library does not provide string handling functions directly. So we have to use some basic string manipulation functions as shown in the following code for performing string replacement operation. This will require a custom function for that purpose. Here's how it can be done -

```c
#include <stdio.h>
#include <string.h>

void replace_substring(char *original, char *toBeReplaced, char *replacement) {
    char buffer[100]; // Assuming max length of original string is 99 characters
    char *ptr = strstr(original, toBeReplaced);  
    
    if (ptr != NULL){
        strncpy(buffer, original, ptr-original); 
        buffer[ptr-original] = '\0'; // Null terminate the first part of original string
        
        sprintf(buffer + (ptr - original), "%s%s", replacement, ptr+strlen(toBeReplaced));  
    } else {
        printf("Substring not found\n"); 
        return;
    }  
    
    strcpy(original, buffer); // Copy the modified string back to original
}

int main() {
    char original[100] = "Mary had a X lamb.";
    replace_substring(original, "X", "big"); 
    printf("String after replacement: %s\n", original);  
    
    return 0;
}
```

In this code, `replace_substring` function takes three string parameters. It replaces the substring from the second parameter in the first parameter with third parameter and stores the result back to the first one. The actual replacement is done by using standard library functions such as `strstr()` (for finding a substring) and `sprintf()` (for formatting and copying into a buffer). 

You may adjust this code according to your requirement, for example, maximum string length, etc. If the substring is not found in original string, it will print "Substring not found" on console and does nothing else. The main function demonstrates usage of `replace_substring`. It replaces all occurrences of 'X' with 'big', and prints out the resulting string.

