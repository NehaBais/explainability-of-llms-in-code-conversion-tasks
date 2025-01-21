#include
int main() {
  printf("Mary had a %s lamb", "little");
  // You can specify order
  printf("%s had a %s lamb", "Mary", "little");
  // Or named arguments if you prefer
  printf("%s had a %s lamb", "Mary", "little");
  return 0;
}