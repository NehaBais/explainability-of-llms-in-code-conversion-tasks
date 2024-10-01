Here is the equivalent code in Go:

```go
package main

import "fmt"

func logic(a bool, b bool) {

    fmt.Println("a AND b:", (a && b)))
    fmt.Println("a OR b:", (a || b))))
    fmt.Println("NOT a:", (!a))))
}

func main() {
    logic(true, false)
}
```
This function `logic` takes two boolean values and prints out the result of "and", "or" and "not" operations on both arguments. The `main` function is used to call this function with specific argument values (true and false).
