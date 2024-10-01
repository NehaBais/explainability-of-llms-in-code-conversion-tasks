This is a challenging task to convert C++ code into Go. However, I can provide you with the equivalent Golang functions for some of the tasks, but please note that the overall logic will be different in Golang compared to C++.

To start with, we cannot compare strings directly using Golang's comparison operators (==, !=, < and >). Strings are sequences of bytes, not sequences of characters. In Go, the bytes are compared lexicographically rather than the characters they represent. This is important because there could be multiple representations for a single character in different languages, so the byte values need to be compared instead of the actual characters.

Here's how you can handle string comparison in Golang:
```go
package main
import (
    "fmt"
    "strings"
    "unicode/utf8"
)
func CompareStrings(a, b string, semantically bool) {
    if a == b {
        fmt.Println(a, "and", b, "are", "exactly", "equal.")
    } else {
        fmt.Println(a, "and", b, "are", "not", "equal")
    }

    switch {
    case strings.Compare(a, b) == 0:
        if semantically {
            fmt.Println(a, "is", "lexically", "ordered before", b, ".")
        } else {
            fmt.Println(a, "is", "numerically", "less than", b, ".")
        }
    case strings.Compare(a, b) < 0:
        if semantically {
            fmt.Println(a, "is", "lexically", "ordered after", b, ".")
        } else {
            fmt.Println(a, "is", "numerically", "greater than", b, ".")
        }
    case strings.Compare(a, b) > 0:
        if semantically {
            fmt.Println(b, "is", "lexically", "ordered after", a, ".")
        } else {
            fmt.Println(b, "is", "numerically", "greater than", a, ".")
        }
    }
}
func main() {
    // Case-sensitive comparisons.
    a := "1.2.Foo"
    b := "1.3.Bar"
    CompareStrings(a, b, true)

    // Case-insensitive comparisons by folding both strings to a common case.
    a = strings.ToLower(a)
    b = strings.ToLower(b)
    CompareStrings(a, b, true)

    // Numeric comparisons; here 'float64' could be any type for which the
    // relevant > and < operators are defined.
    var numA, numB float64
    fmt.Sscanf(a, "%f", &numA)
    fmt.Sscanf(b, "%f", &numB)
    CompareStrings(strconv.Itoa(int(numA)), strconv.Itoa(int(numB)), false)
}
```
This code uses the `strings` and `unicode/utf8` packages for string manipulation and comparison respectively. You can refer to their documentation for more details.
