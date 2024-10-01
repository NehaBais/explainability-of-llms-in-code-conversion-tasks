In Go, you can't directly prepend strings as in JavaScript, but this can be achieved by creating a new slice of bytes (byte array) that includes the two desired strings. Here is how you could write your code:

```go
package main

import (
    "fmt"
)

func main() {
    s := ", World"
    s = "Hello" + s
    fmt.Println(s)
}
```
In this Go program, "+ operator" is used to concatenate two strings. This is equivalent to the "+" operation in your JavaScript code.
Please note that in Go, strings are immutable and any concatenation creates a new string, which may have performance implications for large amounts of data. If you're looking to efficiently concatenate many strings together, consider using `strings.Builder` or other methods available in Go's standard library.
