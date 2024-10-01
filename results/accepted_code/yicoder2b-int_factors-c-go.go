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