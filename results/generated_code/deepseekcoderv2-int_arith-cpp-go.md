Answer: In Go, we can use the fmt package to take input and print output. The syntax for taking in integer inputs is `fmt.Scanln(&variable_name)`. We will use this same syntax for all variables that are of type int.
Here's how you convert a C++ program written using iostream into Go:
```go
package main

import (
    "fmt"
)

func main() {
    var a, b int
    fmt.Scanln(&a, &b)
    fmt.Println("Sum:", a+b)
    fmt.Println("Difference:", a-b)
    fmt.Println("Product:", a*b)
    quotient := float64(a) / float64(b)
    remainder := a % b
    fmt.Printf("Quotient: %.2f, Remainder: %d\n", quotient, remainder)
}
```
