The errors occur because the `rotr` and `rotl` functions are not declared before they are used. The fix is to move the function declarations before the `main` function.

```c
int rotr(int value, int shift);
int rotl(int value, int shift);

int main() {
  // ...
}
```
