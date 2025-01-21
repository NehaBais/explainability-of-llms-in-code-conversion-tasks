#include
#include

int main() {
  int n1, n2;
  printf("Enter number: ");
  scanf("%d", &n1);
  printf("Enter number: ");
  scanf("%d", &n2);
  if (n1 < n2) {
    printf("%d is less than %d.", n1, n2);
  } else if (n1 == n2) {
    printf("%d is equal to %d.", n1, n2);
  } else {
    printf("%d is greater than %d.", n1, n2);
  }
  return 0;
}