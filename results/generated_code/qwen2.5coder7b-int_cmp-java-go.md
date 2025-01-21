Here's how you can convert the given Java code into Golang:

```go
package main

import (
    "fmt"
)

func main() {
    var num1, num2 int
    fmt.Print("Enter first number: ")
    fmt.Scan(&num1)
    fmt.Print("Enter second number: ")
    fmt.Scan(&num2)

    if num1 < num2 {
        fmt.Println(num1, "is less than", num2)
    }

    if num1 > num2 {
        fmt.Println(num1, "is greater than", num2)
    }

    if num1 == num2 {
        fmt.Println(num1, "is equal to", num2)
    }
}
```
This Go code does the same thing as your Java code. It gets two integers from the user and compares them using the `<`, `>`, and `==` operators.
