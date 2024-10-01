The following code is the equivalent of your C program in C++:

```cpp
#include <iostream>
#include <vector>
using namespace std;

class Factors {
public:
    vector<int> list; 
    short count = 0;  // initializing it to zero
};

void xferFactors( Factors *fctrs, vector<int>& flist, int flix ) {
    for (int i=0; i<flix; i++) {
        fctrs->list.push_back(flist[i]);
    }
    fctrs->count += flix; // increment the count by number of factors added 
}

Factors *factor( int num, Factors *fctrs) {
    vector<int> flist;

    for (int dvsr=1; dvsr*dvsr <= num; ++dvsr)  { // changed from < to <= for the last factor which could be sqrt of number
        if(num % dvsr != 0 ) continue;

        flist.push_back(dvsr);
        if (dvsr*dvsr != num)  // if the divisor and quotient are not same i.e., the factor pair is not the same e.g., for 25 - factors are 1,25 but no need to add 25/1
            flist.push_back(num / dvsr); // add the corresponding pair
    }   

    xferFactors( fctrs, flist, (int)flist.size() );  // size_t to int cast done for flix parameter

    return fctrs; 
}
        
int main(void) {
    vector<int> nums2factor = {2059, 223092870, 3135, 45};
    Factors ftors;
    char sep;

    for (auto& num : nums2factor) { // range based loop for iterating over the vector. 
        factor(num, &ftors);
        cout << "factors of " << num << " are: \n  ";
        sep = ' ';
        for (int j=0; j< ftors.count; ++j) {
            cout << sep << ftors.list[j]; 
            sep = ',';
        }   
        cout << "\n";
    }
    return 0;
}
```
