The error message indicates that there is a newline character in the middle of an argument list, which is not allowed by Go's syntax rules for function calls. The fix involves removing the newline characters from the middle of the argument lists in the `fmt.Printf()` statements. Here's the corrected code:
```go
package main
import (
 "fmt"
)
func main() {
 var a, b int
 fmt.Println("Enter two integers:")
 _, err := fmt.Scan(&a, &b)
 if err != nil {
 fmt.Println("Error reading input:", err)
 return
 }
 // test for less-than
 if a < b {
 fmt.Printf("%d is less than %d", a, b)
 }
 // test for equality
 if a == b {
 fmt.Printf("%d is equal to %d", a, b)
 }
 // test for greater-than
 if a > b {
 fmt.Printf("%d is greater than %d", a, b)
 }
}
```

