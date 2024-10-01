Sure! Here's the equivalent Golang code for the given requirements:
```
package main
import (
 "fmt"
 "strings"
)
func startsWith(container, target string) bool {
 return strings.HasPrefix(container, target)
}
func endsWith(container, target string) bool {
 return strings.HasSuffix(container, target)
}
func doesContain(container, target string) bool {
 return strings.Contains(container, target)
}
func main() {
 fmt.Println("Starts with Test ( Hello,Hell ) :", startsWith("Hello","Hell"))
 fmt.Println("Ends with Test ( Code,ode ) :", endsWith("Code","ode"))
 fmt.Println("Contains Test ( Google,msn ) :", doesContain("Google","msn"))
}
```
Note that the Golang strings package provides functions for these tasks, making the code more concise and readable compared to the C version. Also, the `strings.HasSuffix` function is used instead of manually calculating the length of the container string and subtracting the length of the target string from it.

