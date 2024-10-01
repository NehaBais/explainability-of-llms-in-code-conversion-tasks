Here's the Golang code that meets your requirements:
```go
package main
import (
 "fmt"
)
func main() {
 s := "hello"
 fmt.Println(s, "literal")
 s2 := s + " literal"
 fmt.Println(s2)
}
```
This code creates a string variable `s` and assigns it the value `"hello"`. It then concatenates `s` with the string literal `"literal"` using the `+` operator, resulting in a new string variable `s2` with the value `"hello literal"`. Finally, it prints both variables to the console.

