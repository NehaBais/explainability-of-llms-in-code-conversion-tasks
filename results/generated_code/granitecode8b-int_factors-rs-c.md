Here is the converted code from Rust to C:
```
#include 
#include 
#include 
void factor(int num, int *factors) {
 int i;
 for (i = 1; i <= sqrt(num); i++) {
 if (num % i == 0) {
 factors[i-1] = i;
 factors[sqrt(num)-1+i] = num/i;
 }
 }
}
int main() {
 int num = 100;
 int *factors = malloc(sizeof(int)*(sqrt(num)+1));
 factor(num, factors);
 for (int i = 0; i < sqrt(num)+1; i++) {
 printf("%d ", factors[i]);
 }
 return 0;
}
```
In this C code, the `factor` function takes an integer `num` and a pointer to an array of integers `factors`. It calculates the factors of `num` using a loop that iterates from 1 to the square root of `num`. For each iteration, it checks if `num` is divisible by `i`, and if so, it stores `i` as the first factor and `num/i` as the second factor in the `factors` array. The `sqrt` function from the math library is used to calculate the square root of `num`.
The `main` function allocates memory for the `factors` array using the `malloc` function, calls the `factor` function with the input `num`, and then prints out the factors in sorted order using a loop. Note that the C code does not include assertions, but you can add them to verify that the output is correct.

