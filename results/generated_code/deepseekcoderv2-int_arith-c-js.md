*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Get two integers from the user, and then (for those two integers), display their:
    int a = 0, b = 0, result = 0;
    printf("Enter an integer for variable 'a': ");
    scanf("%d", &a);
    printf("You have entered %d as your first number.\n", a);
    printf("Now enter another one: ");
    scanf("%d", &b);
    printf("You have entered %d as your second number.\n", b);
    // 1) sum
    result = a + b;
    printf("\nTheir sum is equal to %d.\n", result);
    // 2) difference
    if (a > b) {result = a - b;} else {result = b - a;}
    printf("Their difference is equal to %d.\n", result);
    // 3) product
    result = a * b;
    printf("Their multiplication is equal to %d.\n", result);
    // 4) integer quotient
    if (a > b && b != 0) {result = a / b;} else if(b < a && a != 0){result = b / a;}
    printf("The integer quotient of the numbers is equal to %d.\n", result);
    // 5) remainder
    if (a > b && b != 0) {result = a % b;} else if(b < a && a != 0){result = b % a;}
    printf("The integer remainder of the numbers is equal to %d.\n", result);
}
