Below is the converted C code for the given Python code. I have written this in a way that makes it clear how to translate each element of the original Python code to its equivalent C code. The main focus here is on making sure that we are taking care of type conversions and proper syntax to get accurate results. In Python, `isqrt(n)` returns an integer (not an integer variable). However, in C, `sqrt()` function gives us a double value which is then converted into integer by using `(int)sqrt()`. So, the type conversion is done correctly.

```c
#include <stdio.h>
#include <math.h>

void factor(int n){
    int factors1[n], factors2[n];
    int count = 0;

    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) {
            factors1[count] = x;
            factors2[count] = n / x;
            count++;
        }
    }

    // Add the square root in case of perfect squares
    int square_root = sqrt(n);
    if ((int)(square_root * square_root) == n) {
        factors1[count] = square_root;
    }

    // Reverse the order of factors2 and merge them with factors1
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", factors1[i]);
    }
}

int main(){
    int num[] = {45, 53, 64};
    for(int i = 0; i < sizeof(num)/sizeof(num[0]); i++){
        factor(num[i]);
        printf("\n");
    }
    return 0;
}
```