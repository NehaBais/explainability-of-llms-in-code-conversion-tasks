The given code is already in C++. However, here's its equivalent version in the C programming language as well:

Please note that error checking and proper formatting are not included for simplicity (as they would require additional lines of code), but it still illustrates how to do similar comparisons using C style printf/scanf functions:
```c
#include <stdio.h>

int main() {
    int a, b;
  
    if(scanf("%d %d", &a, &b) != 2){
        fprintf(stderr, "could not read the numbers\n");
        return 1;
    }
    
    // test for less-than
    if (a < b){
        printf("%d is less than %d \n", a, b);
    }
  
    // test for equality
    if(a == b) {
      printf("%d is equal to %d \n", a, b);
    }
    
    // test for greater-than
    if (a > b){
        printf("%d is greater than %d \n", a, b);
    }  
}
```
This code asks the user for two integers and checks which one of them is less than, equal to or greater than the second. The scanf function returns the number of input items successfully read, so it's checked that both numbers were entered correctly. If not, stderr message is printed, program ends with an error status code 1.

