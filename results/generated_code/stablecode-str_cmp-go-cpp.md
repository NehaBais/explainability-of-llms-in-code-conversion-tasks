Below is a direct conversion of your provided Golang code into C++11:

```cpp
#include <iostream>
#include <string>
#include <algorithm>

bool compareStrings(std::string str1, std::string str2) {

    // Comparing two strings for exact equality
    if (str1 == str2) {
        return true;
    }

    // Comparing two strings for inequality 
    // (i.e., the inverse of exact equality))
    else {
        return false;
    }
}

bool compareStringsFold(std::string str1, std::string str2) {

    // This function compares two strings with case insensitive comparison
    // Golang's strings.EqualFold() function works in a similar manner.
    std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Comparing two strings for exact equality 
    if (str1 == str2) {
        return true;
    }

    // If they're not equal, then they can't be lexically ordered before or after each other.
    else {
        return false;
    }
}

int main() {
    std::string c = "cat";
    std::string d = "dog";
    if (compareStrings(c, d))) {
        std::cout << c << " is bytewise identical to " << d << std::endl;
    } else {
        std::cout << c << " is bytewise different from " << d << std::endl;
    }

    // lexical comparison before and after each other.
    if (compareStringsFold(c, d)))) {
        std::cout << c << " is lexically bytewise greater than " << d << std::endl;
    } else if (compareStringsFold(d, c)))) {
        std::cout << c << " is lexically bytewise less than " << d << std::endl;
    }

    return 0;
}
```
Note: This C++11 code uses the `<algorithm>` library to perform operations such as transforming a string into lowercase using the `::tolower` function. These functions may not be available in all versions of C++, so you may need to include additional libraries or write alternative functions if necessary.
