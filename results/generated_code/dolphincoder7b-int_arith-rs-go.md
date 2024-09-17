### Code in Golang:
```go
package main
import (
    "fmt"
)
func getIntegers() (int, int) {
    var x, y int
    fmt.Print("Enter an integer: ")
    _, _ = fmt.Scanf("%d", &x)
    fmt.Print("Enter another integer: ")
    _, _ = fmt.Scanf("%d", &y)
    return x, y
}
func displayOperations(x, y int) {
    sum := x + y
    difference := x - y
    product := x * y
    quotient := x / y  // truncates towards zero
    remainder := x % y  // same sign as first operand
    var exponentiation int

    fmt.Printf("sum:              %d\n", sum)
    fmt.Printf("difference:       %d\n", difference)
    fmt.Printf("product:          %d\n", product)
    fmt.Printf("quotient:         %d\n", quotient)
    fmt.Printf("remainder:        %d\n", remainder)

    if exponentiationOperatorExists {
        exponentiation = x ^ y
        fmt.Printf("exponentiation:   %d\n", exponentiation)
    }
}
func main() {
    x, y := getIntegers()
    displayOperations(x, y)
}
```
