This is a simple demonstration of how to compare two strings in C++:

1. Comparing two strings for exact equality: If the content of both strings matches exactly, they are considered equal. The `==` operator is used for this comparison.
   ```cpp
    a == b ? std::cout << "Exactly equal\n" : std::cout << "Not exactly equal\n";
   ```
2. Comparing two strings for inequality (the inverse of exact equality): The `!=` operator is used to check if the two strings are not equal.
    ```cpp
    a != b ? std::cout << "Not exactly not equal\n" : std::cout << "Exactly not equal\n";
   ```
3. Comparing two strings to see if one is lexically ordered before than the other: Here, we just check whether string `a` precedes string `b` lexically according to lexical order of characters. You can use the `<` operator for this comparison.
    ```cpp
    (a < b) ? std::cout << "String a precedes\n" : (a > b) ? std::cout << "String b precedes\n" : std::cout << "Strings are equal\n";
   ```
4. Comparing two strings to see if one is lexically ordered after than the other: This is just like comparing string `b` to string `a`, but using `>` instead of `<`.
    ```cpp
    (a > b) ? std::cout << "String a follows\n" : (a < b) ? std::cout << "String b follows\n" : std::cout << "Strings are equal\n";
   ```
5. How to achieve both case sensitive and case insensitive comparisons within the language: Here, we use `std::transform` function to transform both strings into all lowercase before comparing them for equality. This means that the comparison is case sensitive when one string has a uppercase letter and the other does not. If you want to compare strings irrespective of their cases, you can convert both strings to the same case before performing the comparison.
    ```cpp
    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);
   ```
6. How the language handles comparison of numeric strings if these are not treated lexically: The language does not have any default behaviour when comparing numeric strings. We need to implement our own comparison operators for them if we want to compare them numerically. This is not common practice in C++ as it adds unnecessary complexity to the language. It would be more common to treat all numbers the same way, which will depend on your specific requirements and needs.
   ```cpp
    std::istringstream(a) >> numA;
    std::istringstream(b) >> numB;
    demo_compare<double>(numA, numB, "numerically");
   ```
7. This is a basic demonstration and doesn't cover all possible string comparisons. The language you are using (C++ in this case) provides a variety of functions to help you when dealing with strings and other types of data. You can also use templates to make your code more reusable, which makes it easier to extend or modify later on.
