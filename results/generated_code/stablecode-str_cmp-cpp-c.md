The given C++ code has been converted to C language as per the given requirements. The code demonstrates various string comparison techniques in C. Here's an overview of the changes:

1. Header files are included for necessary functions and types used in the code.

2. A templated function `demo_compare` is defined to demonstrate different string comparison techniques based on a given type `T`.

3. Inside the `demo_compare` function, various string comparisons are demonstrated:

   - Comparing two strings for exact equality using the `==` operator.

   - Comparing two strings for inequality (i.e., the inverse of exact equality)) using the `!=` operator.

   - Comparing two strings to see if one is lexically ordered before than the other using the `<` operator.

   - Similarly, comparing two strings to see if one is lexically ordered after than the other using the `>` operator.

4. To demonstrate both case sensitive comparisons and case insensitive comparisons within the language:

   - Case-sensitive comparison is demonstrated by passing the original strings without converting them to lowercase.

   - To demonstrate a case-insensitive comparison, the input strings are converted to lowercase using the `std::transform` function with the `::tolower` function as the transformation operation.

5. The `demo_compare` function is templated on type `T`, allowing it to work for different types of data such as strings, integers, floats, etc.

6. In the `main` function, the input strings are obtained from the command line arguments using appropriate checks and conversions where necessary.

7. Finally, the `demo_compare` function is called with the input strings to demonstrate various string comparison techniques based on the given type `T`.

The converted C code successfully demonstrates different string comparison techniques in C language, including case sensitive comparisons, case insensitive comparisons, lexical comparisons, and numeric string comparisons. The code also provides flexibility by allowing it to work for different types of data such as strings, integers, floats, etc.
