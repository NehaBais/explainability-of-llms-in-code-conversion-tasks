Here's the Golang code that performs string interpolation using the given variables and values:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 original := "Mary had a X lamb."
 toBeReplaced := "X"
 replacement := "little"
 newString := strings.Replace(original, toBeReplaced, replacement, -1)
 fmt.Println("String after replacement:", newString)
}
```
The `strings.Replace()` function takes four arguments: the original string, the substring to be replaced, the replacement string, and the maximum number of replacements to perform (in this case, -1 indicates that all occurrences should be replaced). The function returns a new string with the specified substitutions made.

