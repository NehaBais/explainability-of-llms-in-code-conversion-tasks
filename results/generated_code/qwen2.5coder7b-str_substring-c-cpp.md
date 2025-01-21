Converting the given C code to C++ involves several changes due to language differences. Here's the equivalent C++ code that meets your requirements:

```cpp
#include <iostream>
#include <string>
#include <cstring>

std::string substring(const std::string& s, size_t n, ptrdiff_t m)
{
    // Check for empty string
    if (s.empty())
        return {};

    // Negative m to mean 'up to the mth char from right'
    if (m < 0) 
        m = s.size() + m - n + 1;

    // n < 0 or m < 0 is invalid
    if (n >= s.size() || m <= 0)
        return {};

    // Make sure string does not end before n
    // and advance the "s" pointer to beginning of substring
    for (; n > 0; --n, ++s)
        if (*s == '\0')
            // String ends before n: invalid
            return {};

    std::string result;
    result.reserve(m);
    for (size_t i = 0; i < static_cast<size_t>(m) && s[i] != '\0'; ++i)
        result += s[i];
    
    return result;
}

std::string str_wholeless1(const std::string& s)
{
    if (s.empty())
        return {};

    return substring(s, 0, s.size() - 1);
}

std::string str_fromch(const std::string& s, char ch, ptrdiff_t m)
{
    auto pos = s.find(ch);
    if (pos == std::string::npos)
        return {};

    return substring(s, pos + 1, m);
}

std::string str_fromstr(const std::string& s, const std::string& in, ptrdiff_t m)
{
    auto pos = s.find(in);
    if (pos == std::string::npos)
        return {};

    return substring(s, pos + in.size(), m);
}

void test(const std::function<std::string()>& func)
{
    auto r = func();
    if (r.empty())
        std::cout << "--error--" << std::endl;
    else {
        std::cout << r << std::endl;
    }
}

int main()
{
    const std::string s = "hello world shortest program";

    test([s]() { return substring(s, 12, 5); }); // get "short"
    test([s]() { return substring(s, 6, -1); }); // get "world shortest program"
    test([s]() { return str_wholeless1(s); }); // "... progra"
    test([s]() { return str_fromch(s, 'w', 5); }); // "world"
    test([s]() { return str_fromstr(s, "ro", 3); }); // "rog"

    return 0;
}
```

### Key Changes and Additions:
1. **String Handling**: 
   - Replaced `char*` with `std::string` for better safety and easier handling.
   - Used `std::find` to locate the position of a character or substring within the string.

2. **Function Overloads**:
   - Defined helper functions (`str_wholeless1`, `str_fromch`, `str_fromstr`) that utilize the main `substring` function with specific parameters.

3. **Lambda Expressions**:
   - Used lambda expressions in the `test` macro to call different substring functions, making the code more concise and readable.

4. **Error Handling**:
   - Simplified error handling by returning empty strings when conditions are not met.

5. **Output**:
   - Replaced `printf` with `std::cout` for better integration with C++'s I/O stream library.

This C++ code maintains the functionality of the original C code while leveraging modern C++ features and practices.
