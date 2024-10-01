This is a simple C program that computes the factors of an input number:

```c
#include <stdio.h>

int main() {
    int num, dvsr, flist[301], flix = 0;

    printf("Enter the number to factor: ");
    scanf("%d", &num);

    for (dvsr=1; dvsr<=num/2; dvsr++) {
        if ((num % dvsr) == 0) {
            if (flix == 300) {
                printf("\n");
                flix = 0;
            }
            flist[flix++] = dvsr;
        }
    }
    printf("\nFactors of %d are: ", num);
    for (int i=0; i<flix; i++) {
        printf("%d ", flist[i]);
    }
    printf("\n");

    return 0;
}
```
This program first scans the number to factor from user input. Then it iterates over all numbers upto half of the number and checks if that number is a factor by taking modulo with the number. If it's a factor, it prints out and increments a counter variable. After going through all the possible factors, it prints them out.
Please note, this program does not allocate sufficient memory to store the list of factors in case the number has very large prime factors (which is unlikely for typical integer values), so if you run it on any numbers other than 2059 or 223092870, it will fail.
