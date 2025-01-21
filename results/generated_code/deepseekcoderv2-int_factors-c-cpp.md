 Here's the equivalent C++ code for the provided C code:

```cpp
#include <iostream>
#include <vector>
#include <cmath>

class Factors {
public:
    std::vector<int> list;
};

void xferFactors(Factors *fctrs, const std::vector<int>& flist) {
    int newSize = fctrs->list.size() + flist.size();
    if (newSize > flist.size()) {
        fctrs->list.reserve(newSize); // Reserve space to avoid multiple reallocations
        fctrs->list.resize(newSize);   // Resize the vector to the new size
    } else {
        fctrs->list.clear();
        fctrs->list.reserve(newSize); // Reserve space to avoid multiple reallocations
        fctrs->list.resize(newSize);   // Resize the vector to the new size
    }
    for (size_t ij = 0, ix = fctrs->list.size(); ix < newSize; ++ij, ++ix) {
        fctrs->list[ix] = flist[ij];
    }
}

Factors* factor(int num) {
    std::vector<int> flist;
    int dvsr;
    for (dvsr = 1; dvsr * dvsr < num; ++dvsr) {
        if (num % dvsr != 0) continue;
        flist.push_back(dvsr);
        flist.push_back(num / dvsr);
    }
    if (dvsr * dvsr == num) {
        flist.push_back(dvsr);
    }

    Factors* fctrs = new Factors();
    if (!flist.empty()) {
        xferFactors(fctrs, flist);
    }
    return fctrs;
}

int main() {
    int nums2factor[] = { 2059, 223092870, 3135, 45 };
    Factors ftors;
    char sep;

    for (int i = 0; i < 4; ++i) {
        Factors* fctrs = factor(nums2factor[i]);
        std::cout << "Factors of " << nums2factor[i] << " are: ";
        sep = ' ';
        for (size_t j = 0; j < fctrs->list.size(); ++j) {
            std::cout << sep << fctrs->list[j];
            sep = ',';
        }
        std::cout << std::endl;
        delete fctrs; // Clean up the Factors object
    }
    return 0;
}
```

### Explanation:
1. **Factors Class**: Replaced the `struct` with a class `Factors` to encapsulate the list of factors and provide better memory management.
2. **Vector Usage**: Used C++ STL `vector` instead of dynamically allocated arrays.
3. **Memory Management**: Managed memory using `new`, `delete`, and vector's reserve/resize methods for better performance and safety.
4. **Function Signatures**: Changed function signatures to match C++ standards (e.g., removed pointers where not necessary).
5. **Output Formatting**: Used `<iostream>` for output formatting, which is more idiomatic in C++.
