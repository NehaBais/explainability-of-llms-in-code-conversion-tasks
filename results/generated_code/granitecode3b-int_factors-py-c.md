Here is the C code that implements the same functionality as the provided Python code:
```c
#include math.h
#include stdbool.h
typedef struct {
 int *factors;
 int size;
} factors_t;
void destroy_factors(factors_t f) {
 free(f.factors);
}
factors_t factorize(int n) {
 factors_t result = { NULL, 0 };
 if (n <= 1) return result;
 for (int i = 2; i <= sqrt(n); ++i) {
 if (n % i == 0) {
 int *new_factors = malloc((result.size + 2) * sizeof(int));
 memcpy(new_factors, result.factors, result.size * sizeof(int));
 new_factors[result.size] = i;
 ++result.size;
 new_factors[result.size] = n / i;
 ++result.size;
 free(result.factors);
 result.factors = new_factors;
 }
 }
 if (sqrt(n) * sqrt(n) == n) {
 int *new_factors = malloc((result.size + 1) * sizeof(int));
 memcpy(new_factors, result.factors, result.size * sizeof(int));
 new_factors[result.size] = sqrt(n);
 ++result.size;
 free(result.factors);
 result.factors = new_factors;
 }
 return result;
}
void print_factors(factors_t f) {
 printf("Factors of %d: [", f.n);
 for (int i = 0; i < f.size; ++i) {
 printf("%d ", f.factors[i]);
 }
 printf("]\n");
}
int main() {
 factors_t result45 = factorize(45);
 print_factors(result45);
 destroy_factors(result45);
 
 factors_t result53 = factorize(53);
 print_factors(result53);
 destroy_factors(result53);
 
 factors_t result64 = factorize(64);
 print_factors(result64);
 destroy_factors(result64);
 
 return 0;
}
```
This C code defines a struct `factors_t` to store the factors of a number, and a function `factorize` that takes an integer as input and returns a `factors_t` containing its factors. The `print_factors` function is used to print out the factors of a number. Finally, in the `main` function, we call `factorize` on three numbers (45, 53, and 64) and print their factors using `print_factors`.

