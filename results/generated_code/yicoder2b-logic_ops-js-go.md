Sure, here is the equivalent code in Golang. 

In Golang, we use the `panic` function to handle any errors, so you might see more explicit error handling than in JavaScript.

```go
package main
import "fmt"

func logic(a bool, b bool) {
    if a && b {
        fmt.Println("a AND b: true")
    } else {
        fmt.Println("a AND b: false")
    }
    if a || b {
        fmt.Println("a OR b: true")
    } else {
        fmt.Println("a OR b: false")
    }
    if !a {
        fmt.Println("NOT a: true")
    } else {
        fmt.Println("NOT a: false")
    }
}

func main()  {
   logic(true, true)
   logic(false, true)
   logic(true, false)
   logic(false, false)
}
``` 

In Golang, the `&&` operator for 'AND' is replaced with `&` and the `||` operator for 'OR' is replaced with `|`. The `!` prefix stands for NOT in Go, which means "the opposite of its operand". Please note that the way you handle errors can vary between languages and frameworks.
