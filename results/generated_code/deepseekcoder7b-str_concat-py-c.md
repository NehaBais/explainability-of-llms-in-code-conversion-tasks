The equivalent C code would be as follows:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "hello";
    printf("%s world\n", s1);  // Concatenates and prints the string
    
    char s2[100];   // Declare a character array to hold concatenated result
    strcpy(s2, s1);  // Copy original string into new string
    strcat(s2, " world");  // Concatenate another string literal onto the end of it
    printf("%s\n", s2);   // Prints the content of variable s2
    
    char s3[] = ", ";
    char words[10][50] = {"world", "mom"};  // Declare a two-dimensional array to hold the words we want to join. Here, each word can take up to 49 characters and there are 10 total.
    strcpy(s2, s1);  // Copy original string into new string
    
    for (int i = 0; i < 2; ++i) {   // Loop through the words we want to join
        strcat(s2, s3);  
        strcat(s2, words[i]);  // Concatenate each word onto the end of our string.
    }
    
    printf("%s\n", s2);  // Prints the content of variable s2

    return <｜begin▁of▁sentence｜>0;
}
```
The main differences are that in C we don't use `+` to concatenate strings like in Python, instead we use functions like `strcpy()` and `strcat()`. Also note how we have to manage memory for our string data manually unlike python which handles it automatically. We also need a different way to concatenate multiple words with the desired delimiter(", "). The above code shows that using two-dimensional character arrays is one of the ways to handle this in C.

