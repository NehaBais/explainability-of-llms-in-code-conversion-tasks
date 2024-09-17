Here is the C code that computes the factors of a positive integer:
```c
#include 
#include 
#include 
int main()
{
 long n, i;
 printf("Enter a positive integer: ");
 scanf("%ld", &n);
 printf("Factors of %ld are:n", n);
 for(i = 2; i <= sqrt(n); i++)
 {
 if(n % i == 0)
 {
 printf("%ld x %ld = %ldn", i, n / i, n);
 }
 }
 return 0;
}
```
This code uses a for loop to iterate through all the positive integers less than or equal to the square root of the given number. It checks if the current integer is a factor of the number by dividing it with another integer and checking if the remainder is zero. If so, it prints out the pair of factors.

