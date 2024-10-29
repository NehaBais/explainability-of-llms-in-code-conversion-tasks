Sure, here's how you can do this in C using `string.h` library for string operations.

```c
#include <stdio.h>
#include <string.h>

int main() {
    // create a string variable equal to any text value
	char s[] = "hello";
    
    // concatenate with another string literal
	strcat(s, " there!");
    
    // show the content of the variables
	printf("%s\n", s);
	return 0;
}
```

In this code:
- We first include `stdio.h` for printf() function and `string.h` for strcat() function which is used to concatenate strings in C.
- In main(), we create a string variable named 's' by initializing it as "hello". 
- We then use the strcat() function to append the text " there!" to the original string, resulting in updating our 's'.
- Finally, we print out the updated contents of our string using printf(). This will display: hello there!.

