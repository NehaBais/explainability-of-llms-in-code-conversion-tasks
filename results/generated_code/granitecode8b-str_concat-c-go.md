Here's the Golang code that meets your requirements:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 s := "hello"
 fmt.Printf("%sn", s) // Print s as a string literal
 
 s2 := strings.Join([]string{s, " literal"}, "")
 fmt.Println(s2) // Concatenate s and " literal" with no separator
 
 s3 := s + " literal"
 fmt.Println(s3) // Concatenate s and " literal" with a space as a separator
}
```
In this code, we use the `fmt` package to print strings in Go. We also use the `strings` package to concatenate strings. 
The first variable declaration creates a string variable named `s` that is initialized to the value `"hello"`. The second variable declaration uses the `fmt.Printf` function to print `s` as a string literal. The third and fourth variable declarations create two other string variables, `s2` and `s3`, by concatenating `s` with `" literal"` using different methods. Finally, we use the `fmt.Println` function to print the contents of `s2` and `s3`.

