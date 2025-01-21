 Sure, here is the equivalent code in Golang:

```go
package main

import "fmt"

func logic(a, b bool) {
    fmt.Println("a AND b:", a && b)
    fmt.Println("a OR b:", a || b)
    fmt.Println("NOT a:", !a)
}

func main() {
    logic(true, true)
    logic(true, false)
    logic(false, true)
    logic(false, false)
}
```

This Golang code defines a function `logic` that takes two boolean arguments and prints the results of "AND", "OR", and "NOT" operations on them. The `main` function demonstrates how to call this function with different combinations of boolean values.
