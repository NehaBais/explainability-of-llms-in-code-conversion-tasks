```c
void bitwise(int a, int b)
{
  printf("a and b: %d\n", a & b);
  printf("a or b: %d\n", a | b);
  printf("a xor b: %d\n", a ^ b);
  printf("not a: %d\n", ~a);

  printf("a shl b: %d\n", a << b);
  printf("a shr b: %d\n", a >> b);
  printf("a lsr b: %d\n", (unsigned int)a >> b);

  unsigned int ua = a;
  printf("a rol b: %d\n", __builtin_rol(ua, b));
  printf("a ror b: %d\n", __builtin_ror(ua, b));
}
```

**Explanation:**

* The code uses `printf` statements instead of `std::cout` for output.
* The `~a` expression performs the bitwise NOT operation.
* The `a << b`, `a >> b`, and `(unsigned int)a >> b` expressions perform left shift, right shift, and right arithmetic shift operations, respectively.
* The `__builtin_rol` and `__builtin_ror` functions are used to perform left rotate and right rotate operations, respectively.
* The `__builtin_rol` and `__builtin_ror` functions are available in C and C++ since the introduction of the GNU C compiler.
