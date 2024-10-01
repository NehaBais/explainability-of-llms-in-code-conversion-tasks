The given code is already written in C and there's not much modification required to convert it into C++. Here is the equivalent of the C code in C++:

```cpp
#include<string>
#include<iostream>

#define STREQ(A,B) ((A).compare((B))==0)
#define STRNE(A,B) (!STREQ(A,B))
#define STRLT(A,B) ((A).compare((B))<0)
#define STRLE(A,B) (STRLT(A,B) || STREQ(A,B))
#define STRGT(A,B) (!STRLT(A,B) && !STREQ(A,B))
#define STRGE(A,B) (!STRLT(A,B))

int main() {
  std::string A, B;
  puts("	eq , ne , gt , lt , ge , le");
  while (std::cin >> A >> B) {
    compare(A, B);
  }
  return 0;
}
```

In the C++ code, we are using `std::string` instead of `char*`, which is more idiomatic to C++. We also replaced `strcmp` with `compare` method of `std::string`. Note that unlike `strcasecmp`, `compare` does not have an equivalent ignoring case option in C++ standard library.

Note: The code assumes that the input strings contain only alphanumeric characters and spaces for simplicity. If this is not the case, more sophisticated error handling may be needed.
