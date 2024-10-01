Here is the equivalent C code for the given Python code. 
Note that we need to include `math` and `stdio.h` libraries in order to use square root function (`sqrt`) and printf respectively.

```c
#include <math.h>
#include <stdio.h>

void factor(int n) {
    printf("%i: factors: ", n); 
    int factors1[50];  // Assumed maximum limit for the count of factors which may vary based on input
    int factors2[50];
    int len_factors1 = 0;
    int len_factors2 = 0;

    for (int x=1; x <= sqrt(n); ++x) {  // range is from 1 to square root of n
        if (n % x == 0){
            factors1[len_factors1++] = x;
            if(n/x != x) // avoid duplicate for perfect square numbers. eg: if n = 4, we don't want 2 and 2 to appear twice in the list.
                factors2[len_factors2++] = n / x;  // append n//x into factors2
        }       
    }
    for (int i=0; i<len_factors1; ++i) {
      printf("%d ", factors1[i]); 
    }
    for (int j=len_factors2-1; j>=0; --j) {  // iterate over the reverse of factors2
        printf("%d ", factors2[j]); 
    }
    printf("\n");
}

int main() {
    for (int i=45; i<67; ++i){
        factor(i);
    }   
    return 0;
}
```
This C program does the same thing as your Python function. It calculates factors of a number and prints them out in the console. Note that this code assumes an upper limit for array size (50), which may need to be adjusted based on actual usage scenario or input data.
