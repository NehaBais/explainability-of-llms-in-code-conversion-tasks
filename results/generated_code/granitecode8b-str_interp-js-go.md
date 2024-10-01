Here's the equivalent code in Golang:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 original := "Mary had a X lamb"
 little := "little"
 replaced := strings.Replace(original, "X", little, -1)
 fmt.Println(replaced) // Output: Mary had a little lamb
}
```
In this example, we use the `strings.Replace()` function to replace all occurrences of "X" in the original string with the value of the "little" variable. The `-1` argument indicates that we want to replace all occurrences, not just the first one. The result is a new string that contains the interpolated value.

