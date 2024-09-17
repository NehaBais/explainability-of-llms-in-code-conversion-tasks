In Golang, you can use the `fmt.Scanln` function for taking user input and comparing them using conditional statements in Go language. Here is your Python code converted into Golang -

```go
package main
import "fmt"
func main() {
    var a int 
    var b int 
    
    fmt.Print("Enter value of a: ")
    fmt.Scanln(&a)
    
    fmt.Print("Enter value of b: ")
    fmt.Scanln(&b)
    
    if a < b {
        fmt.Println("a is less than b")
    } else if a > b {
        fmt.Println("a is greater than b")
    } else if a == b {
        fmt.Println("a is equal to b")
    } 
}
```
This code does exactly what your Python code was doing: it asks for the user's input twice, then compares them with each other using the `<` (less than), `>` (greater than) and `==` (equals to) operators. If `a < b`, it prints "a is less than b". If `a > b`, it prints "a is greater than b". And if `a == b`, it prints "a is equal to b".

