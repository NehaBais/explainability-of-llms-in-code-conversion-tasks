Answer: The following code is the C version of the given program. Since it is not possible to get two different types from standard input and print out them, I replaced all std::cin with scanf and std::cout with printf. Also, since a/b = 0 when b < a in integer division but you want that to be equal to 1, we will need another variable "rem" which is the remainder of a%b divided by b.
```
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a+b = %d\n", a + b);
	printf("a-b = %d\n", a - b);
	printf("a*b = %d\n", a * b);
	if (a >= 0 && b > 1) { // if the result is less than 1 then we have to round down or up depending on the way it rounds.
		int rem;
		rem = (a - ((int)(a / b))*b); 
		// This ensures that the remainder matches the sign of a when they are different in case of negative numbers.
		if (a < 0) { // if both signs are same then result is positive and otherwise it will be negative as we have to make sure it has right sign too.
			printf("(int)(a/b) = %d, remainder (%d/%d)%d\n", ((int)(a / b)), a, rem); 
		} else {
			// if both signs are same then result is positive and otherwise it will be negative as we have to make sure it has right sign too.
			printf("(int)(a/b) = %d, remainder (%d/%d)%d\n", ((int)(a / b)), a, rem); 
		}
	} else {
		// otherwise quotient can be found by taking its absolute value and multiplying it with sign of the dividend.
		printf("(int)(a/b) = %d, remainder (%d/%d)%d\n", ((int)(fabs(a / b))), a, rem); 
	}
	return 0;
}
```
