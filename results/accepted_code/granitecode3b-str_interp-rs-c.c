#include
int main() {
  printf("Mary had a %s lambn", "little");
  // You can specify order
  printf("%sn%s had a %sns %s lamb", "little", "Mary", "little", "Mary");
  // Or named arguments if you prefer
  printf("%s had a %sns lambn", "Mary", "little", "Mary", "little");
  return 0;
}