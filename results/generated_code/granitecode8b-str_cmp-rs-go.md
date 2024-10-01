Here's the equivalent code in Golang:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 a := "abc"
 b := "Bac"
 // exact equality
 if a == b {
 fmt.Println("The strings are equal")
 }
 // inequality
 if a != b {
 fmt.Println("The strings are not equal")
 }
 // lexically ordered before than
 if a < b {
 fmt.Println("The first string is lexically before the second")
 }
 // lexically ordered after than
 if a > b {
 fmt.Println("The first string is lexically after the second")
 }
 // case-insensitive equality
 if strings.EqualFold(a, b) {
 fmt.Println("Both strings are equal when ignoring case")
 }
}
``` 
In Golang, we can use the `==` operator to compare two strings for exact equality. We can also use the `!=` operator to compare two strings for inequality. 
To compare two strings lexically, we can use the `<`, `>`, `<=`, or `>=` operators. 
Golang provides a `strings` package that contains various string comparison functions, such as `EqualFold()` which compares two strings without regard to case. This function is useful for case-insensitive comparisons. 
In Golang, we can also compare numeric strings using the `<`, `>`, `<=`, or `>=` operators. However, if the strings are not numeric, the comparison will be based on the lexical order of the characters in the strings.

