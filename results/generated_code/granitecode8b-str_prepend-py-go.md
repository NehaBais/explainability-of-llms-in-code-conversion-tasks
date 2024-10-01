Here's the equivalent code in Golang:
```go
package main
import "fmt"
func main() {
 s := "12345678"
 s = "0" + s // by concatenation
 fmt.Println(s)
}
```
In this code, we first import the `fmt` package to use the `Println()` function. Then, we declare a string variable `s` and assign it the value `"12345678"`. Next, we prepend the string variable with another string literal by concatenating them using the `+` operator. Finally, we print the resulting string using the `Println()` function.

