Here is the Golang code that satisfies the given requirements:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 str := "my String"
 str = "Changed " + str
 fmt.Println(str)
}
```
This code creates a string variable `str` with the value "my String", then prepends it with another string literal "Changed ", resulting in the final output "Changed my String". The `strings.Join()` function is used to concatenate the two strings, and the `fmt.Println()` function is used to print the result to the console.

