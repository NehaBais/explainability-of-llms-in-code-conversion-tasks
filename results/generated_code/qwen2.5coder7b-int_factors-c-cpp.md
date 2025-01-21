To convert the given C code to C++, you need to make several adjustments. C++ is a more modern and object-oriented language compared to C, so it has a different syntax and standard library. Below is the converted C++ version of your code:

```cpp
#include <iostream>
#include <vector>
#include <cstdlib>

struct Factors {
    std::vector<int> list;
};

void xferFactors(Factors& fctrs, const int* flist, size_t flix) 
{
    for (size_t i = 0; i < flix; ++i) {
        fctrs.list.push_back(flist[i]);
    }
}

Factors factor(int num, Factors& fctrs)
{
    fctrs.list.clear();
    int dvsr;
    for (dvsr = 1; dvsr * dvsr <= num; ++dvsr) {
        if (num % dvsr != 0) continue;
        xferFactors(fctrs, &dvsr, 2);
    }
    if (dvsr * dvsr == num) 
        fctrs.list.push_back(dvsr);
    return fctrs;
}

int main()
{
    int numsToFactor[] = { 2059, 223092870, 3135, 45 };
    Factors ftors;

    for (const auto& num : numsToFactor) {
        factor(num, ftors);
        std::cout << "factors of " << num << " are: ";
        for (size_t i = 0; i < ftors.list.size(); ++i) {
            if (i != 0) std::cout << ", ";
            std::cout << ftors.list[i];
        }
        std::cout << std::endl;
    }

    return 0;
}
```

### Explanation of Changes:

1. **Struct Definition**: Changed the `Factors` struct to use a `std::vector<int>` instead of a dynamic array and manually managing memory.

2. **Memory Management**: Removed manual memory management (like `malloc`, `realloc`, and `free`) and used `std::vector` which handles memory automatically.

3. **xferFactors Function**: The function now takes a reference to `Factors` and modifies the vector directly instead of reallocating memory.

4. **factor Function**: Simplified the logic by using `std::vector`.

5. **Main Function**:
   - Used a range-based for loop to iterate over `numsToFactor`.
   - Used `std::cout` for output, which is more idiomatic in C++.
   - Fixed the separator issue to handle commas correctly.

This C++ version should work similarly to your original C code but with improved safety and modern features.
