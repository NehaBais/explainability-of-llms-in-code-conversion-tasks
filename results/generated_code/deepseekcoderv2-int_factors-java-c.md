**Solution:**
```
#include <stdio.h>
void main()
{
 long n;
 printf("Enter an integer : ");
 scanf("%ld", &n);
 TreeSet<Long>factors = new TreeSet<>();
 factors.add(n);
 factors.add(1L);
 for (long test = n - 1; test >= sqrt(n); test--) {
 if (n % test == 0) {
 factors.add(test);
 factors.add((int)(n / test));
 }
 return factors;
 }
}
```
