Here is the equivalent Golang code for your Python function:

```go
package main

import "fmt"

func logic(a bool, b bool) {
    fmt.Println("a and b:", a && b)
    fmt.Println("a or b:", a || b)
    fmt.Println("not a:", !a)
}

func main() {
    logic(true, false)
}
```
This Golang code performs the same logical operations as your Python function: it takes two boolean values `a` and `b`, and outputs the result of "and" and "or" on both arguments as well as "not" on the first argument.
