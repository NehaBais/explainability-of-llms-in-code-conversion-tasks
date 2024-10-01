This C++ code can be converted to C as follows:

C Code:
```c
#include <stdio.h>
#include <inttypes.h>

void printFactors(int n) {
    printf("Factors of %d are: ",n);
    for (int i = 1; i <= n ; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    const int SampleNumbers[] = {3135,45,60,81};
    for (size_t i = 0; i < sizeof(SampleNumbers)/sizeof(int); ++i) {
        printFactors(SampleNumbers[i]);
    }
    return 0;
}
```
