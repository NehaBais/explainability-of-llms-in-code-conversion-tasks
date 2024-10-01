Sure, here is the equivalent C code for the given Python script. We are using a different approach to find factors of a number. Note that there is no direct method in C to get all the prime numbers upto n like in python's `isqrt(n)`. But this can be achieved through a simple loop and checking if each number is divisible by 1 or itself (as per the problem).

```C
#include <stdio.h>

void factor(int n){
    for (int x = 1; x <= n; x++) {
        if (n % x == 0) {
            printf("%d ",x);
        }
    }
    printf("\n");
}

int main(){
    factor(45);
    factor(53);
    factor(64);
    return 0;
}
```

This code will output all the factors of each given number. For example, for the number 45, it would print `1 3 5 9 15` and so on. This is because every multiple of a number (except itself) also divides that number.
