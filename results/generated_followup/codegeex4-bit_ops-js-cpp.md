The error occurred because `std::cout` cannot directly be assigned an `unsigned` integer, which is what I attempted to do with `(a >>> b)`. This can be fixed by casting the result back to a signed integer before printing it.

Fix: Cast the unsigned result back to int.
```cpp
void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;
  std::cout << "NOT a: " << ~a << std::endl;
  std::cout << "a << b: " << (a << b) << std::endl; // left shift
  std::cout << "a >> b: " << (a >> b) << std::endl; // arithmetic right shift
  std::cout << "unsigned a >>> b: " << static_cast<int>(static_cast<unsigned>(a) >> b) << std::endl;
}
```
