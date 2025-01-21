 Sure! Below is the equivalent code in Golang:

```go
package main

import "fmt"

func logic(a, b bool) {
    fmt.Println("a and b:", a && b)
    fmt.Println("a or b:", a || b)
    fmt.Println("not a:", !a)
}

func main() {
    logic(true, true)
    logic(true, false)
    logic(false, true)
    logic(false, false)
}
```

This Golang code defines a function `logic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments. The `main` function demonstrates how to call this `logic` function with different combinations of boolean values.
