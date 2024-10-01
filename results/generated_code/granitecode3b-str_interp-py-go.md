Here's the equivalent Golang code for the given Python code snippet:
```
package main
import "fmt"
func main() {
 extra := "little"
 newStr := fmt.Sprintf("Mary had a %s lamb.", extra)
 fmt.Println(newStr)
}
```
The `fmt.Sprintf()` function in Golang is used for string interpolation, and it takes the format string as its first argument and any number of arguments to be inserted into the string. In this case, the format string is `"Mary had a %s lamb."`, which has one placeholder `%s` that will be replaced by the value of `extra`. The output of this Golang code will be:

Mary had a little lamb.

