 To convert the given Python code to C, we need to follow these steps:

1. Compute the factors of a positive integer.
2. The factors are the positive integers by which the number being factored can be divided to yield a positive integer result.
3. Every prime number has two factors: 1 and itself.

Here's the equivalent C code:

```c
#include <stdio.h>
#include <math.h>

void factor(int n) {
    int x;
    for (x = 1; x * x < n; x++) {
        if (n % x == 0) {
            printf("%d ", x);
            if (n / x != x) {
                printf("%d ", n / x);
            }
        }
    }
    if (x * x == n) {
        printf("%d ", x);
    }
}

int main() {
    int numbers[] = {45, 53, 64};
    for (int i = 0; i < 3; i++) {
        printf("%i: factors: ", numbers[i]);
        factor(numbers[i]);
        printf("\n");
    }
    return 0;
}
```

Explanation:
1. The `factor` function computes the factors of a given number `n`.
2. It iterates from 1 to the square root of `n` and checks if `x` is a factor by checking if `n % x == 0`.
3. If `x` is a factor, it prints both `x` and `n / x`.
4. If `x * x == n`, it means `x` is a perfect square root of `n`, so it prints `x`.
5. The `main` function iterates over the given numbers and calls the `factor` function for each number, printing the factors.

Note: In C, we don't have built-in functions like `isqrt` in Python, so we use a simple loop to check up to the square root of `n`. The rest of the logic is straightforward once you understand how to find factors in both languages.
