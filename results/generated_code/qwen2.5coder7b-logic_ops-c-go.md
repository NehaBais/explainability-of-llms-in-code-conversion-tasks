Here's the equivalent code in Golang:

```go
package main

import "fmt"

func printLogic(a, b bool) {
    fmt.Println("a and b is", a && b)
    fmt.Println("a or b is", a || b)
    fmt.Println("not a is", !a)
}

func main() {
    printLogic(true, false)
}
```
This Go code defines a function `printLogic` which takes two boolean arguments. It then prints the result of logical AND, OR and NOT on the first argument using the `fmt.Println` function. The `main` function calls `printLogic` with some sample values.
