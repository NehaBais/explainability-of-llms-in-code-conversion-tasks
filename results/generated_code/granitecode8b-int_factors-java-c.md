Here is the converted code from Java to C:
```
#include 
#include 
#include 
int main()
{
 long n;
 printf("Enter a positive integer: ");
 scanf("%ld", &n);
 TreeSet factors = {n, 1};
 for(long test = n - 1; test >= sqrt(n); test--)
  if(n % test == 0)
  {
   factors.insert(test);
   factors.insert(n / test);
  }
 printf("Factors of %ld:n", n);
 for(auto factor : factors)
  printf("%ldn", factor);
 return 0;
}
```
In this C code, we first prompt the user to enter a positive integer `n`. We then create a TreeSet called `factors` and insert the values `n` and `1` into it. We then loop through all numbers from `n-1` down to the square root of `n`, and if the current number is a factor of `n`, we add it to the `factors` set and also add its complement (i.e., `n/test`) to the set. Finally, we print out the contents of the `factors` set, which contains all the factors of `n`.

