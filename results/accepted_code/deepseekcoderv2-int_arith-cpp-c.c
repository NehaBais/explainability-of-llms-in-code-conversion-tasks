#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("a+b = %d\n", a + b);
  printf("a-b = %d\n", a - b);
  printf("a*b = %d\n", a * b);
  if (a >= 0 && b > 1) { // if the result is less than 1 then we have to round
                         // down or up depending on the way it rounds.
    int rem;
    rem = (a - ((int)(a / b)) * b);
    // This ensures that the remainder matches the sign of a when they are
    // different in case of negative numbers.
    if (a <
        0) { // if both signs are same then result is positive and otherwise it
             // will be negative as we have to make sure it has right sign too.
      printf("(int)(a/b) = %d, remainder (%d/%d)%d\n", ((int)(a / b)), a, rem);
    } else {
      // if both signs are same then result is positive and otherwise it will be
      // negative as we have to make sure it has right sign too.
      printf("(int)(a/b) = %d, remainder (%d/%d)%d\n", ((int)(a / b)), a, rem);
    }
  } else {
    // otherwise quotient can be found by taking its absolute value and
    // multiplying it with sign of the dividend.
    printf("(int)(a/b) = %d, remainder (%d/%d)%d\n", ((int)(fabs(a / b))), a,
           rem);
  }
  return 0;
}