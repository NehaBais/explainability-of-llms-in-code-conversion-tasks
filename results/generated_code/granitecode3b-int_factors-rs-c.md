Sure, here's the C code that corresponds to the provided Rust code:
```c
#include
#include
#include
#include
int main() {
 assert(0 == memcmp(factor(100), (int[]){1, 2, 4, 5, 10, 10, 20, 25, 50, 100}, 5 * sizeof(int)));
 assert(0 == memcmp(factor(101), (int[]){1, 101}, 2 * sizeof(int)));
 return 0;
}
int* factor(int num) {
 int i, sqrt_num = (int)sqrt((float)num);
 int *factors = malloc(sizeof(int) * (num + 1)); // creates an array to hold the factors of num
 
 for (i = 1; i <= sqrt_num; i++) { 
 if (num % i == 0) { 
 factors[i] = i;
 factors[num / i] = num / i;
 }
 }
 qsort(factors, 1 + num, sizeof(int), compare); // sorts the array of factors
 
 return factors;
}
int compare(const void *a, const void *b) {
 int aa = *(int*)a;
 int bb = *(int*)b;
 
 return aa - bb;
}
```
This C code defines a function `factor` that takes an integer `num` as input and returns an array of integers representing the factors of `num`. The function first calculates the square root of `num`, rounds it down to the nearest integer, and then iterates through all numbers from 1 to the square root. For each number `i`, if `num % i == 0`, it means that `i` is a factor of `num` and we push both `i` and `num / i` to an array `factors`. Finally, we sort the array using the `qsort` function and return it as the output.
Note that this C code assumes that the standard library functions like `sqrt`, `malloc`, and `free` are available and properly defined in the environment where the code is executed.

