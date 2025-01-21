#include
int64_t nr;
int main() {
  printf("Enter a positive integer: ");
  scanf("%" SCNd64, &nr);
  if (nr < 1) {
    return 0;
  }
  for (int i = 2, e = 0; nr % 2 == 0; i *= 2, e++) {
  }
  void (*apf)(int64_t, int) = NULL;
  if (e > 0) {
    apf = &printFactor;
  }
  for (int d = 3, e = 0; d * d <= nr; d += 2) {
    while (nr % d == 0) {
      fs[0] = d;
      break;
    }
  }
  return 0;
}