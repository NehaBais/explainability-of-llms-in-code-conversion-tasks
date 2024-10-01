Golang does not support string interpolation in the same way that Rust, but we can achieve similar functionality using string formatting. Here is the equivalent Golang code:

```go
package main

import "fmt"

func main() {
    fmt.Printf("Mary had a %s lamb\n", "little")
    // You can specify order
    fmt.Printf("%s had a %s lamb\n", "Mary", "little")
    // Or named arguments if you prefer
    fmt.Printf("%[1]s had a %[2]s lamb\n", "Mary", "little")
}
```

In Golang, `%s` is used to print a string in the specified format. The `Printf` function in Golang prints formatted strings and returns the number of bytes written as an integer, it can handle multiple arguments based on the format specification passed into it. The format string syntax is similar to C’s printf function.
