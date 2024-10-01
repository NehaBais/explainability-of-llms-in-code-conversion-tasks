#include
#include
void printLogic(int a, int b) {
 printf("a and b is %d
", a && b);
 printf("a or b is %d
", a || b);
 printf("not a is %d
", !a);
}
int main() {
  printLogic(1, 1); // Example usage
  return 0;
}