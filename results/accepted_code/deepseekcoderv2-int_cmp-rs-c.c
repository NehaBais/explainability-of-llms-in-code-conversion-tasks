#include <stdio.h>
int main() {
  int nums[2], i, j;
  scanf("%d %d", &nums[0], &nums[1]);
  for (i = 0, j = 1; i < 2 && j < 2; i++, j++) {
    if (nums[i] > nums[j]) {
      printf("%d is greater than %d\n", nums[i], nums[j]);
    } else if (nums[i] == nums[j]) {
      printf("%d equals to %d\n", nums[i], nums[j]);
    } else {
      printf("%d is less than %d\n", nums[i], nums[j]);
    }
  }
  return 0;
}