Sure! Here's the equivalent Golang code for the provided Rust code:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 a := "abc"
 b := "Bac"
 // only same types can be compared
 // String and String or &str and &str
 // exception: strict equality and inequality also work on &str and String
 if a == b {
 fmt.Println("The strings are equal")
 }
 if a != b {
 fmt.Println("The strings are not equal")
 }
 if a > b {
 fmt.Println("The first string is lexically after the second")
 }
 if a < b {
 fmt.Println("The first string is lexically before the second")
 }
 if a >= b {
 fmt.Println("The first string is not lexically before the second")
 }
 if a <= b {
 fmt.Println("The first string is not lexically after the second")
 }
 // case-insensitives:

 // equality
 // this avoids new allocations
 if strings.EqualFold(a, b) {
 fmt.Println("Both strings are equal when ignoring case")
 }

 // everything else, create owned Strings, then compare as above
 a2 := strings.ToUpper(a)
 b2 := strings.ToUpper(b)

 // repeat checks
}
```

