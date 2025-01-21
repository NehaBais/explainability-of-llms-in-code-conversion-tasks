The equivalent C++ code would look like this:

```cpp
#include<iostream>
#include<set>
using namespace std;

set<long> factors(long n) 
{
    set<long> factors;
    factors.insert(n);
    factors.insert(1L);
    for (long test = n - 1; test >= sqrt(n); test--) {
        if (n % test == 0)
            factors.insert(test);
            factors.insert(n / test);
    }
    return factors;
}

int main() 
{
    long number;
    cout << "Enter a positive integer: ";
    cin >> number;
    
    set<long> result = factors(number);

    cout << "Factors of " << number << ": ";

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}
```

In the above code, we use the set container from the <set> library to store factors as they are found. This will automatically remove duplicates.

Also note that this program uses 'long' data type, which is suitable for handling very large numbers. If you need to handle larger integers, you might want to use 'unsigned long'. Also, the program doesn't check if the entered number is positive or not, so you need to add such a check before calling the factors function.
