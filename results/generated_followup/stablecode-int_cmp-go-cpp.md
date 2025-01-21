The error is generated due to incorrect syntax in C++. Specifically, this error occurs because of an unexpected unqualified-id. 

To fix this error, we need to correct the syntax of the case statement in C++. The corrected code block is as follows:

```cpp
switch (true) {
    case n1 < n2:
        std::cout << n1 << " less than " << n2 << std::endl;
        break;
    case n1 == n2:
        std::cout << n1 << " equal to " << n2 << std::endl;
        break;
    case n1 > n2:
        std::cout << n1 << " greater than " << n2 << std::endl;
        break;
}
```

This corrected code block will now compile successfully in C++.
