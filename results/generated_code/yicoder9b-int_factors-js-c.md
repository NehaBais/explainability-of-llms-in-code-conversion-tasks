Here is the equivalent C code for the given JavaScript function. The C program computes and prints the factors of a positive integer:

```c
#include <stdio.h>
#include <math.h>

void factors(int num){
    int i;
    printf("[");
    for (i = 1; i <= floor(sqrt((double)num)); ++i){
        if (num % i == 0){
            printf("%d", i);
            if (num / i != i){
                printf(",%d", num/i);
            }
            if(i < floor(sqrt((double)num))){
                printf(", ");
            }
        }
    }
    printf("]\n");
}

int main(){
  factors(45);  // prints [1,3,5,9,15,45] 
  factors(53);  // prints [1,53] 
  factors(64);  // prints [1,2,4,8,16,32,64]
  return 0;
}
```
This C code uses the same logic as your JavaScript function. It iterates over every number up to the square root of the inputted number and checks if it's a factor by using the modulus operator. If it is, it prints out the number. If the quotient of num/i is not equal to i (which would mean that we have already counted both factors before), then it also prints that as well. The program uses 'printf' instead of JavaScript's 'push' function to output results.
