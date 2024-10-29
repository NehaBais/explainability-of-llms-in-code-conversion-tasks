In C programming language, you can use `sprintf` for prepending a string to another string which is similar to what happens in the given Rust code. Here's how you could implement it:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "World";  // Create a string variable equal to any text value.
    
    char hello[] = "Hello ";   // String literal we want to prepend.
    
    /* Prepend the second string (hello) to the first string (s). */
    sprintf(s, "%s%s", hello, s); 
    
    printf("%s\n", s);  // Output: Hello World
    
    return 0;
}
```
Note that in this example, I've used the `sprintf` function which writes into the string `s` everything that would be printed to the console if you had called `println!("{}", s)`. The result is then printed by using `printf("%s\n", s);`

