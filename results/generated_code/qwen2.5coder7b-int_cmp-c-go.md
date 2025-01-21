Here's how you can convert the given C code into Golang:

```go
package main

import (
    "fmt"
)

func main() {
    var a, b int
    fmt.Print("Enter two integers: ")
    _, err := fmt.Scanf("%d %d", &a, &b)
    if err != nil {
        panic(err)
    }

    if a < b {
        fmt.Printf("%d is less than %d\n", a, b)
    }

    if a == b {
        fmt.Printf("%d is equal to %d\n", a, b)
    }

    if a > b {
        fmt.Printf("%d is greater than %d\n", a, b)
    }
}
```

This Go code does the same thing as your original C code. It gets two integers from the user using `fmt.Scan`, then uses three separate `if` statements to print out whether `a` is less than, equal to, or greater than `b`.
