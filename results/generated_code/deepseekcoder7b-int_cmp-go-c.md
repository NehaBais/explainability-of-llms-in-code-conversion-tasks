The equivalent C code for the provided GoLang program would look like this:

```c
#include <stdio.h>

int main() {
    int n1, n2;
    printf("enter number: ");
    scanf("%d", &n1);
    printf("enter number: ");
    scanf("%d", &n2);
    
    if (n1 < n2) {
        printf("%d is less than %d\n", n1, n2);
    } else if (n1 == n2) {
        printf("%d is equal to %d\n", n1, n2);
    } else {
        printf("%d is greater than %d\n", n1, n2);
    }
    
    return 0;
}
```
Here's the description of each line:
- Line 4 imports `stdio.h` which contains functions for input and output operations.
- Lines 7–9 are just standard syntax to declare two integer variables, `n1` & `n2` respectively.
- On lines 10&12 the user is prompted to enter a number (on line 10) and this value is read into variable `n1` (line 12). We do the same for `n2` in line 14.
- Finally, we use an if/else if/else statement as in GoLang, checking each case: n1 < n2, n1 == n2 and n1 > n2 respectively with suitable printf statements inside each block to print corresponding output message. 

Please note that unlike C++ or Java, there is no need for error handling in this simple program since user input is very reliable (we're asking for integers which will always be successfully read). However, if you were reading floats or any other types of data, you would have to include error checks and it could get more complex.

