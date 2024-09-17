 The C code provided is already in C++ syntax and standards since it contains C++ features like `std::free`, `std::malloc` etc. However, for a more idiomatic C++, here's how the same functionality could be achieved:

```cpp
#include <iostream>
#include <vector>

struct Factors {
    std::vector<int> list;
    int count; 
};

void xferFactors( Factors &fctrs, const std::vector<int>& flist) 
{
    for (auto ix = fctrs.list.size(); ix < flist.size(); ix++) {
        fctrs.list.push_back(flist[ix]);
    }
}

Factors factor( int num, Factors &fctrs) 
{
    std::vector<int> flist;
    for (int dvsr = 1; dvsr * dvsr < num; ++dvsr){
        if (num % dvsr != 0 || fctrs.list.size() == 300) {
            continue;
        }
        flist.push_back(dvsr);
        flist.push_back(num / dvsr);
    }
    if (dvsr * dvsr == num) {
        flist.push_back(dvsr);
    }
    xferFactors(fctrs, flist);
    
    return fctrs;
}
        
int main(){
    int nums2factor[] = { 2059, 223092870, 3135, 45 };
    Factors ftors{};
    char sep;
    
    for (auto i : nums2factor){
        factor(i, ftors);
        
        std::cout << "Factors of " << i << " are: ";
        sep = ' ';
        for (auto j : ftors.list) {
            std::cout << sep << j;
            sep = ',';
        }
        std::cout << "\n";
    }
    
    return 0;
}
```
