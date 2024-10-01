Here is the Golang code that meets the requirements:
```go
package main
import (
 "fmt"
 "strings"
)
func main() {
 myStrings := []string{"prepended to", "my string"}
 prepended := strings.Join(myStrings, "")
 fmt.Println(prepended)
}
```
This code creates a slice of strings called `myStrings`, and then uses the `strings.Join()` function to concatenate them into a single string. The resulting string is stored in the variable `prepended`. Finally, the `fmt.Println()` function is used to print the value of `prepended` to the console.

