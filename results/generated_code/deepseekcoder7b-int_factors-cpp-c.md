Here is the C version of your code. In this code I have simply removed all the C++ specific syntaxes and replaced them with standard C language syntaxes. It should work fine in a plain C environment. 

```c
#include <stdio.h>
#include <stdlib.h>

void GenerateFactors(int n, int *factors) {
    factors[0] = 1;
    int i, j=1;
    for (i = 2; i*i <= n; ++i)  {
        if (n % i == 0) {
            factors[j++] = i;
            if (i * i != n)
                factors[j++] = n / i;
         }
     }
    factors[j++] = n; // add the number itself as factor
}

int cmpfunc(const void *a, const void *b) 
{
   return ( *(int*)a - *(int*)b );
}

int main() {
    int SampleNumbers[] = {3135, 45, 60, 81};
    int factors[25]; // assuming the number of factors will not exceed 25 for this example. Adjust as needed in a real-world scenario.

    for (int i = 0; i < sizeof(SampleNumbers)/sizeof(int); ++i) {
        GenerateFactors(SampleNumbers[i], factors);  
        
        qsort(factors, SampleNumbers[i]+1 , sizeof(int), cmpfunc); // sorting the array of factors

        printf("Factors of %4d are: ", SampleNumbers[i]);
        for (int j = 0; j < SampleNumbers[i]; ++j)  {
            printf("%5d",factors[j] );  
        }
         printf("\n");
     }
    return EXIT_SUCCESS;
}
```

