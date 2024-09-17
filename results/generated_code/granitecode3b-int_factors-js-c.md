Here is the C code that computes the factors of a positive integer:
```c
#include 
int main() {
 int num = 45;
 int i, sqrt_num = (int)sqrt(num);
 printf("Factors of %d are:n", num);
 for (i = 1; i <= sqrt_num; i++) {
 if (num % i == 0) {
 printf("%dn", i);
 if (i != (num / i))
 printf("%dn", num / i);
 }
 }
 return 0;
}
```
This code uses a for loop to iterate through all the numbers from 1 to the square root of the given number. For each number, it checks if the number is divisible by that number or not. If it is, then it prints that number as a factor. If it is not, then it checks if the quotient of the original number and the current number is an integer. If it is an integer, then it also prints that number as a factor.
For example, when we run this code with `num = 45`, it will print:
```
Factors of 45 are:
1
3
5
9
15
45
```

