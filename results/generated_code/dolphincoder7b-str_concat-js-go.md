```go
package main
import "fmt"
func main() {
    var s = "hello"
    fmt.Println(s + " there!")
}
```
In Golang, string concatenation is performed using the `+` operator. Also, note that the use of the `print()` function in Go is replaced by `fmt.Println()`. Finally, `var s  = "hello"` and `print(s)` can be combined into a single line statement `fmt.Println("hello" + " there!")`. The code above will output `"hello there!"`.
