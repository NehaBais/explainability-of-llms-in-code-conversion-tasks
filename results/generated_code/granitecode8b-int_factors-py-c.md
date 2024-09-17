Here is the converted code from Python to C:
```
#include 
#include 
#include 
int main() {
 int i;
 for (i = 45; i <= 64; i++) {
 int j, n = i;
 int factors[i];
 for (j = 0; j < sqrt(n); j++) {
 if (n % (j + 1) == 0) {
 factors[j] = j + 1;
 }
 }
 j++;
 if (j * j == n) {
 factors[j - 1] = j;
 }
 for (j--; j >= 0; j--) {
 printf("%i ", factors[j]);
 }
 printf("n");
 }
 return 0;
}
```
The code computes the factors of a positive integer. Factors are the positive integers by which the number being factored can be divided to yield a positive integer result. Every prime number has two factors: 1 and itself. The program uses an array to store the factors and prints them in reverse order. The function sqrt() is used to compute the square root of the input number. The program iterates over all numbers from 45 to 64 and computes their factors using the above algorithm.

