```cpp
#include <iostream>
#include <vector>
#include <memory>

struct Factors {
    std::vector<int> list;
    short count;
};

void xferFactors(Factors& fctrs, const std::vector<int>& flist, short flix) {
    int ix, ij;
    int newSize = fctrs.count + flix;
    fctrs.list.resize(newSize);
    for (ij = 0, ix = fctrs.count; ix < newSize; ij++, ix++) {
        fctrs.list[ix] = flist[ij];
    }
    fctrs.count = newSize;
}

Factors* factor(int num, Factors* fctrs) {
    std::vector<int> flist(301);
    short flix = 0;
    fctrs->count = 0;
    fctrs->list.clear();
    for (int dvsr = 1; dvsr * dvsr < num; dvsr++) {
        if (num % dvsr != 0) continue;
        if (flix == 300) {
            xferFactors(*fctrs, flist, flix);
            flix = 0;
        }
        flist[flix++] = dvsr;
        flist[flix++] = num / dvsr;
    }
    if (dvsr * dvsr == num)
        flist[flix++] = dvsr;
    if (flix > 0)
        xferFactors(*fctrs, flist, flix);

    return fctrs;
}

int main() {
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors ftors = {std::vector<int>(), 0};
    char sep;
    int i, j;

    for (i = 0; i < 4; i++) {
        factor(nums2factor[i], &ftors);
        std::cout << "Factors of " << nums2factor[i] << " are:" << std::endl;
        sep = ' ';
        for (j = 0; j < ftors.count; j++) {
            std::cout << sep << ftors.list[j];
            sep = ',';
        }
        std::cout << std::endl;
    }
    return 0;
}
```

**Changes Made:**

* Replaced `typedef` with `struct` for `Factors`.
* Replaced `malloc` and `realloc` with `std::vector` for memory management.
* Replaced `free` with `clear` for `std::vector`.
* Replaced `printf` with `std::cout`.
* Used `std::endl` for newlines.
* Removed unnecessary casts.
* Used `std::vector<int>&` for the function argument of `xferFactors`.
* Added `std::endl` before the factor list for better readability.
