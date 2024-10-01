Here is your converted code in C:

```c
#include <stdio.h>
#include <math.h>

void factor(int num) {
    int factors[100]; // creates a new array for the factors of the number 
    int count = 0;

    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            factors[count++] = i; // pushes smallest factor to factors
            if (i*i != num)  // avoid duplicate for perfect square numbers
                factors[count++] = num/i; // pushes largest factor to factors
        }
    }
    for(int i=0; i<count-1; ++i) {
       for(int j=i+1;j<count; ++j) { 
          if (factors[i] > factors[j]) { // if the current number is greater than the next one, then swap them.
            int temp = factors[i];
            factors[i] = factors[j];
            factors[j] = temp;
         } 
       }
    }  // sorts the factors into numerical order for viewing purposes

    for(int i=0; i<count; ++i) { // prints out each factor on a new line
        printf("%d ",factors[i]);
    }
    printf("\n");
} 

int main() {
    factor(100); // finds and displays the factors of num
    factor(101);
    return 0;
}
```
Note: This version doesn't return vectors like Rust, it prints out the sorted list of factors directly. Also, C is a statically typed language so we need to specify the limit for our factor array `factors[100]` which may not be optimal in some cases. However, this limitation makes it easier to sort and print the factors without additional libraries or functions.
