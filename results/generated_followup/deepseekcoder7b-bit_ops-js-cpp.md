The error is caused by trying to use bitwise shift operations (`<<`, `>>`) on 'ostream' objects rather than unsigned integers. The line of code causing this issue is `(ar 32-b % 32)` which seems like it may be trying to right-shift an integer value by a variable amount and then bitwise ANDing the result with another variable, but there are syntax errors in it (like missing parentheses).

To fix this issue, you need to correctly implement these operations. For example, if `ar` is your 'unsigned int' and `b` is the number of bits you want to shift by, you could use the following:

```cpp
cout << "a right shift by b with fill 0: " << (ar & ((1u << b) - 1u)) << endl;
```
In this line `(1u << b) - 1u` creates a number with 'b' least significant bits set to 1 and all other bits set to 0, which then bitwise ANDs it with `ar`. It effectively masks the unwanted bits in ar.

