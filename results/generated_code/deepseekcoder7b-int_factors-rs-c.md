Here is the C equivalent of your Rust code:

```C
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

void factor(int num){
    int factors[1024];  // assuming maximum of 1024 factors for simplicity
    int i, j=0, limit;
    limit = sqrt(num);
    
    for(i = 1; i <= limit; i++) {  
        if(num % i == 0){
            factors[j++] = i;  // push smallest factor to factors array
            factors[j++] = num/i;  // push largest factor to factors array
        }
    }
    
    qsort(factors, j, sizeof(int), compare);  // sort the factors into numerical order for viewing purposes
  
    for(i=0; i < j; i++){
       printf("%d ", factors[i]);  // prints each factor
    }
}

int main() {
    int num = 100;
    printf("Factors of %d: ", num);
    factor(num);  
    
    return 0;
}
```
This C code does exactly the same thing as your Rust program. It finds all factors of a number and prints them out in ascending order. Note that array `factors` is used to store found factors, but you might want to change its size according to your needs (for example if there are more than 1024 potential factors). This code also uses the built-in function qsort() for sorting integers in an array.

