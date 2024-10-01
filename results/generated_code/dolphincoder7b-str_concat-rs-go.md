This is the equivalent Golang code:
```go
package main
import "fmt"
func main() {
    var s string = "hello"
    fmt.Println(s)
    
    var s1 string = s + " world"
    fmt.Println(s1)
}
```
Explanation:
- The `to_owned()` method in Rust is similar to the Golang's `string` type conversion.
- Concatenation in Rust is achieved using the `+` operator, which works for both strings and slices/arrays.
- In Golang, we use `fmt.Println()` to print the content of variables.
