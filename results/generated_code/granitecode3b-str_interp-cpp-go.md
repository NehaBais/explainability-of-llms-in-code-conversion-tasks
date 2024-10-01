Here's the equivalent Golang code for the given C++ program:
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
 
 newString := strings.Replace(original, toBeReplaced, replacement, 1)
 fmt.Println("String after replacement:", newString)
}
```
This Golang code uses the `strings` package to replace the first occurrence of the defined character sequence in the original string with the defined value or variable value. The `strings.Replace()` function takes four arguments: the original string, the character sequence to be replaced, the replacement string, and the maximum number of replacements to perform (in this case, 1). The resulting string is then printed to the console using `fmt.Println()`.

