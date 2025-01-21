Here is a C++ version of the Python code:

```C++
#include <iostream>
#include <string>

bool startsWith(const std::string &str, const std::string &prefix)
{
    if (str.length() < prefix.length())
        return false;

    for (size_t i = 0; i < prefix.length(); ++i)
        if (str[i] != prefix[i])
            return false;

    return true;
}

bool contains(const std::string &str, const std::string &substr)
{
    size_t found = str.find(substr);
    if (found == std::string::npos)
        return false;
    else
        return true;
}

bool endsWith(const std::string &str, const std::string &suffix)
{
    if (str.length() < suffix.length())
        return false;

    for (size_t i = 0; i < suffix.length(); ++i)
        if (str[str.length()-1-i] != suffix[suffix.length()-1-i])
            return false;
    
    return true;
}

int find(const std::string &str, const std::string &substr)
{
    size_t found = str.find(substr);
    if (found == std::string::npos)
        return -1;
    else
        return static_cast<int>(found);
}

int main()
{
    std::string str = "abcd";
    std::cout << std::boolalpha; // For printing bools as true/false instead of 1/0

    std::cout << "starts with: " << startsWith(str, "ab") << std::endl;
    std::cout << "ends with: " << endsWith(str, "zn") << std::endl;

    str = "abab";
    std::cout << "contains: " << contains(str, "bb") << std::endl;
    std::cout << "contains: " << contains(str, "ab") << std::endl;

    std::cout << "find: " << find(str, "bb") << std::endl;
    std::cout << "find: " << find(str, "ab") << std::endl;
    
    int loc = 0;
    while((loc=find(str, "ab", loc+1))!=-1)
    {
        std::cout << "find in loop: " << loc << std::endl;
    }

    return 0;
}
```

Note that C++ `std::string` methods `find`, `startswith`, and `endswith` are case-sensitive. If you need a case-insensitive version, you would have to implement additional functions or use a library function (like `std::equal` with custom predicate). Also, in `main` method, we added a while loop to find all occurrences of substring "ab".
