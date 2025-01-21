#include
int main() {
  int a, b;
  printf("Enter two integers:");
  scanf("%d %d", &a, &b);

  if (a == b) {
 printf("%d equals %d
");
  } else if (a < b) {
 printf("%d is less than %d
");
  } else {
 printf("%d is greater than %d
");
  }

  return 0;
}