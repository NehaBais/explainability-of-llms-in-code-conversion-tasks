Here's the equivalent C code for the given Java code:
```
#include 
int main()
{
 int nbr1, nbr2;
 
 printf("Enter two integers: ");
 scanf("%d %d", &nbr1, &nbr2);
 
 if (nbr1 < nbr2)
 {
 printf("%d is less than %dn", nbr1, nbr2);
 }
 else if (nbr1 > nbr2)
 {
 printf("%d is greater than %dn", nbr1, nbr2);
 }
 else
 {
 printf("%d is equal to %dn", nbr1, nbr2);
 }
 
 return 0;
}
```
The C code prompts the user to enter two integers and reads them using the `scanf` function. It then uses conditional statements (`if`, `else if`, and `else`) to compare the two integers and print the appropriate message based on their relationship. The output is displayed using the `printf` function.

