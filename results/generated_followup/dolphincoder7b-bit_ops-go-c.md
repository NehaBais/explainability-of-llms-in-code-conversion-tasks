The error message indicates that there is an unexpected ')' character before a ',' token. The correct syntax for this operation involves using parentheses to group each operand: `((ua << ub) | (ua >> (32 - ub)))`. 

To fix the code and make it compile successfully, you can modify the respective function calls as follows:

```c
// Rotations
  printf("rol:   %016b\n",  ((int32_t)(ua  << ub) | (int32_t)((ua  >> (32 - ub)))));
}

void rotate_right(int16_t a, int16_t b) {
  uint32_t ua  = a;
  uint32_t ub  = b;

  printf("ror:   %016b\n", ((int32_t)(ua >> ub) | (ua << (32 - ub))));
}
```

In the modified code, we have replaced the `<<` and `>>` operators with `(<<)` and `(>>)`, which are now considered as separate arithmetic operations. We also moved the parentheses around for better readability. This should resolve the error and allow the code to compile successfully.
