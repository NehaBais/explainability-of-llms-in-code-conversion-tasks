package main
import (
    "fmt"
    // add necessary imports here
)
func main() {
    x, y := GET_INTEGERS()
    DISPLAY_OPERATIONS(x, y)
}

GET_INTEGERS():
    var x, y int
    fmt.Scanf("%d %d", &x, &y)

    return (x, y)

DISPLAY_OPERATIONS(x, y):
    sum := x + y
    difference := x - y
    product := x * y
    quotient := x / y   // truncates towards zero
    remainder := x % y   // same sign as first operand

    if  (exponentiation operator exists){
        exponentiation := x ^ y
    }

    fmt.Println("sum:", sum)
    fmt.Println("difference:", difference)
    fmt.Println("product:", product)
    fmt.Println("quotient:", quotient)
    fmt.Println("remainder:", remainder)
    if  (exponentiation operator exists){
        fmt.Println("exponentiation:", exponentiation)
    }