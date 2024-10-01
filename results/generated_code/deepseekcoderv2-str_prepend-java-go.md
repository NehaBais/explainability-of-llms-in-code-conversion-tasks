```go
package main
import (
    "fmt"
)
func main() {
    string := "def" // string literal assigned to a new string variable
    fmt.Println("Original String: ", string)
    // Prepend another string literal with the old one, using += and printing it out
    string = "abc" + string
    fmt.Println("New String after prepended: ", string)
}
```
