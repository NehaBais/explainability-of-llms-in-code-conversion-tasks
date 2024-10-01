Sure, here's the equivalent Golang code:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 str := "my String"
 cstr := "Changed "
 dup := strings.Dup(str)
 fmt.Println(strings.Join([]string{cstr, dup}, ""))
}
``` 
Explanation:
- We start by importing the necessary packages - `fmt` for printing output and `strings` for string manipulation functions.
- The main function is defined with no arguments.
- A string variable named `str` is declared and assigned the value "my String".
- Another string literal named `cstr` is assigned the value "Changed ".
- The `strings.Dup()` function is used to duplicate the contents of `str` and store it in the `dup` variable.
- The `strings.Join()` function is used to concatenate `cstr` and `dup` into a single string, using an empty separator.
- Finally, the resulting string is printed to the console using `fmt.Println()`.

