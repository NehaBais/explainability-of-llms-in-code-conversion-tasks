I'm sorry for the confusion but Golang doesn't support code comparison operators directly like Rust does. However, similar functionality can be achieved with Go's `strings` and `sort` packages. Here is how you could do it:

```go
package main

import (
	"fmt"
	"strings"
)

func main() {
    a := "abc"
    b := "Bac"

    if strings.EqualFold(a, b) {
        fmt.Println("The strings are equal") 
    } else {
        fmt.Println("The strings are not equal") 
    }

    if strings.Compare(a, b) > 0 { 
        fmt.Println("The first string is lexically after the second")
    } else if strings.Compare(a, b) < 0 { 
        fmt.Println("The first string is lexically before the second")
    }
}
```

Here are some key differences from Rust:

1. To compare two strings for exact equality, you can use `==` or `strings.Equal`. The same applies to inequality with `!=`. In Golang, these comparisons only work on the same types (i.e., `string`, `[]byte`, etc.).
2. For lexical comparison, you can use `Compare` function from `strings` package. This function returns:
   - 0 if the strings are equal 
   - less than zero if the first string is lexically before the second one
   - greater than zero if the first string is lexically after the second one
3. To achieve case insensitive comparisons, you can use `EqualFold`, `CompareFold`, or `HasPrefixFold` function from `strings` package.
4. To compare numeric strings as they are not treated lexically by default in Golang, we need to do a little more work:
   - Firstly, convert the numbers to string using `strconv.Itoa`. Then we can perform the comparison.
   - Alternatively, you could convert both the numbers and strings to float64 and then compare them.
5. To demonstrate other kinds of string comparisons, we can use `strings` package's functions like `Contains`, `Index`, `Count`, etc.

Let me know if you have any further questions!
