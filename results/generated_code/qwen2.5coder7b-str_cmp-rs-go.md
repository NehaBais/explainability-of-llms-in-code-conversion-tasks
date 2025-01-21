Here is how you can convert the Rust code to Golang.

```golang
package main

import (
    "fmt"
    "strings"
)

func main() {
    a := "abc"
    b := "Bac"

    if a == b { fmt.Println("The strings are equal") }
    if a != b { fmt.Println("The strings are not equal") }

    if a > b { fmt.Println("The first string is lexically after the second") }
    if a < b { fmt.Println("The first string is lexically before the second") }
    if a >= b { fmt.Println("The first string is not lexically before the second") }
    if a <= b { fmt.Println("The first string is not lexically after the second") }

    // Case insensitive comparison
    a2 := strings.ToUpper(a)
    b2 := strings.ToUpper(b)

    if a2 == b2 {
        fmt.Println("Both strings are equal when ignoring case")
    }
}
```
In Golang, it's straightforward to compare two strings. The `==` and `!=` operators can be used for equality and inequality comparison respectively.

Strings in Go can be directly compared lexicographically using the `<`, `>`, `>=`, and `<=` operators.

When comparing case-insensitively, you need to convert both strings to uppercase or lowercase before comparing them. Here we've used `strings.ToUpper()` function from Go's `strings` package for this purpose.
