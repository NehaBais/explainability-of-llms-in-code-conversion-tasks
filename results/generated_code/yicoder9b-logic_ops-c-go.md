In GoLang the syntax for boolean operations are 'and' && and 'or' ||. The not operator for booleans in go is ^^ which negates the value. Here is your function converted to Golang:

```go
package main
import "fmt"

func printLogic(a bool, b bool) {
    fmt.Printf("a and b is %t\n", a && b)
    fmt.Printf("a or b is %t\n", a || b)
    fmt.Printf("not a is %t\n", !a)
}
```
