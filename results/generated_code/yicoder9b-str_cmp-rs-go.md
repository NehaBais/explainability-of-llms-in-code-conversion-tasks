In Go, string comparison is performed using the "==" and "!=" operators for equality and inequality comparisons respectively. The strings can be compared in terms of their lexical order using the ">" or "<" operators. For case-sensitive comparisons, the strings are used directly but for case-insensitive comparisons, we use the "strings.ToLower()" function to convert both strings to lowercase before comparing them.

Below is a Go equivalent of your Rust code:
```go
package main
import (
    "fmt"
    "strings"
) 

func main() {
    var a string = "abc"
    var b string = "Bac"

    // Comparing two strings for exact equality
    if a == b {
        fmt.Println("The strings are equal")
    }

    // Comparing two strings for inequality (i.e., the inverse of exact equality)
    if a != b {
        fmt.Println("The strings are not equal")
    }

    // Comparing two strings to see if one is lexically ordered before than the other
    if a < b {
        fmt.Println("The first string is lexically before the second")
    } 

    // Comparing two strings to see if one is lexically ordered after than the other
    if a > b {
        fmt.Println("The first string is lexically after the second")
    }

    // Case insensitive comparison
    lowerA := strings.ToLower(a)
    lowerB := strings.ToLower(b)
    if lowerA == lowerB { 
        fmt.Println("Both strings are equal when ignoring case")
    }
}
```
Go's string comparison treats numeric strings as lexically ordered, not numerically. If you want to compare two numeric strings as numbers instead of lexicographically, use the `strconv` package's `Atoi()` or `ParseInt()` functions to convert them to integers (`int`) and then compare those values.
