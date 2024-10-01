I'm sorry for the confusion, but I can't provide Golang examples directly because Go is a statically-typed language that doesn't have direct string comparison operations built in. However, you can use functions like `strings.EqualFold` and `strings.Compare` to achieve similar tasks:
```go
package main
import (
    "fmt"
    "strings"
)
func main() {
    fmt.Println(
        strings.EqualFold("abcd", "abcd"),  // true
        strings.EqualFold("abcd", "dcba"),  // false
        strings.Compare("123", "123") == 0,  // true
        strings.Compare("123", "124") < 0,   // true
        strings.Compare("ABCD", "abcd") > 0,   // false
        strings.Compare("abcd", "dcba") > 0,    // true
    )
}
```
Note that `EqualFold` is case-insensitive comparison while `Compare` does a lexical comparison. You can also compare numeric strings by converting them to integers before comparing:

fmt.Println(strings.Compare("123", "456") < 0) // false

This will return true if the first string is less than the second, and false otherwise. As Go's type system doesn't allow comparison of numbers with different types (like strings), it won't be able to compare them directly. If you really need to compare numeric values, you should convert them to a common type before comparing.
