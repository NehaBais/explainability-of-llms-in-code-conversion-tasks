Below is the equivalent C++ code:

```cpp
#include <iostream>
#include <vector>

struct Factors {
    std::vector<int> list; 
};

void xferFactors(Factors *fctrs, const std::vector<int>& flist) 
{
    fctrs->list.insert(fctrs->list.end(), flist.begin(), flist.end());
}

Factors* factor(int num)
{
    Factors *fctrs = new Factors();
    std::vector<int> flist;
    int dvsr;
    for (dvsr=1; dvsr*dvsr < num; dvsr++) {
        if (num % dvsr != 0) continue;
        if (flist.size() == 300) {
            xferFactors(fctrs, flist);
            flist.clear();
        }
        flist.push_back(dvsr);
        flist.push_back(num/dvsr);
    }
    if (dvsr*dvsr == num)
        flist.push_back(dvsr);
    if (!flist.empty())
        xferFactors(fctrs, flist);

    return fctrs;
}
        
int main()
{
    int nums2factor[] = {2059, 223092870, 3135, 45};
    Factors *ftors;

    for (const auto& num : nums2factor) {
        ftors = factor(num);
        std::cout << "\nfactors of " << num << " are:\n";
        for (const auto& factor : ftors->list)
            std::cout << factor << ' ';
        delete ftors;
    }
    return 0;
}
```
Note: 
- I have made use of C++'s `std::vector` instead of dynamically allocated arrays to manage the list of factors. This simplifies memory management and avoids potential errors associated with manual memory allocation.
- The function `xferFactors` has been simplified by using `insert` method of vector.
- New keywords (`new`, `delete`) have been added for dynamic memory allocation/deallocation in C++. 
- I removed the unnecessary structure definition for factors as it is not used outside of main() and the factor() function.
