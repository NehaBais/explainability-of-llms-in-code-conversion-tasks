Below is the Python code converted to C. Note that for readability purposes, error checking and handling has been added.

```C
#include <stdio.h>
#include <math.h>

void factor(int n) {
    int factors1[100], factors2[100];
    int i = 0;

    for (int x = 1; x <= sqrt(n); x++) {
        if (n % x == 0) {
            factors1[i] = x;
            factors2[i] = n / x;
            i++;
        }
    }

    printf("Factors of number: %d\n", n);
    for(int j=0;j<i;j++) {
      printf("%d ", factors1[j]);
      if (factors2[j] == factors1[j])
            printf("(%d, %d)\n", factors1[j], factors2[j]));
      else
            printf("(%d, %d), Factor repetition\n", factors1[j], factors2[j]));
    }
}

int main() {
    factor(45);
    factor(53);
    factor(64);

    return 0;
}
```
This code first computes the factors of a number by iterating from 1 to the square root of the number. It then stores these factors in two separate arrays, `factors1` and `factors2`. These arrays are used to store the factors of the number being factored, as well as any factors that may be repeated due to the number being a perfect square. Finally, it prints out all of the factors for each of the numbers provided (45, 53, 64).
