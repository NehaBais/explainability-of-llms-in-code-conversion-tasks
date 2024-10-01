```go
package main
import "fmt"
func main() {
    var s = "World" + "Hello "
    fmt.Println(s)
}
```
In Go, strings are immutable and we cannot modify them directly, so we're creating a new string concatenating the original one with the new one. The `+` operator in Go automatically converts non-string types to strings when needed.
Note: In this specific case, the result of the concatenation would be "Hello World". However, as per your requirements, you want it to be "World Hello", which is not achievable with this approach in Go.
