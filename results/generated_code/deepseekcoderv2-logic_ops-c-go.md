 Sure! Here's the equivalent Go code for the given C function:

```go
package main

import "fmt"

func printLogic(a, b bool) {
    fmt.Printf("a and b is %t\n", a && b)
    fmt.Printf("a or b is %t\n", a || b)
    fmt.Printf("not a is %t\n", !a)
}

func main() {
    printLogic(true, true)
    printLogic(true, false)
    printLogic(false, true)
    printLogic(false, false)
}
```

In this Go code:
- The `printLogic` function takes two boolean arguments (`a` and `b`).
- It uses the `fmt.Printf` function to format and print the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments.
- The `main` function demonstrates how to call `printLogic` with different boolean values.
