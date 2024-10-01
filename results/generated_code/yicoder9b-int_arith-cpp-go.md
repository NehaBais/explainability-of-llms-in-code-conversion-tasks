In GoLang:

```go
package main
import ("fmt")

func main() {
    var a, b int
    fmt.Scan(&a, &b)
    fmt.Println("a+b = ", a + b)
    fmt.Println("a-b = ", a - b)
    fmt.Println("a*b = ", a * b)
    fmt.Println("a/b = ", a / b, ", remainder ", a % b )
}
```

This GoLang program does the same thing as your C++ code: it asks for two integers from the user and then prints their sum, difference, product, integer quotient (rounded towards zero), and remainder. 

As for rounding of division operation in GoLang, GoLang follows rules as in C/C++ and Java. That is if a negative number is divided by positive or vice versa it rounds the result down to nearest smaller integer. So it rounds towards the direction of negative infinity.
For the remainder, GoLang provides the '%' operator that returns the remainder after division. The sign of the remainder follows the sign of the dividend (the number on which the division is done).
