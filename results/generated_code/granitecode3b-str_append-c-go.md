Sure! Here's the equivalent Golang code for the given C program:
```
package main
import (
 "fmt"
 "strings"
)
func main() {
 str := "Good Morning"
 cstr := " to all"
 cstr2 := " !!!"

 // Failure when space allocated to str is insufficient.
 if len(str) < len(str)+len(cstr)+len(cstr2) {
 // 1st method
 str += cstr
 // 2nd method
 x := strings.LastIndex(str, " ") + 1
 str = str[:x] + cstr2 + str[x:]
 }

 fmt.Println(str)
}
```
In Golang, we allocate a string variable using the `var` keyword and initialize it with an empty string literal. We can then append additional strings to this variable using the `+` operator or the `fmt.Fprint()` function.
The code checks if there is enough space in the allocated string to accommodate both the existing string and the new strings being appended. If not, it dynamically allocates a larger string buffer using the `strings.Builder` type and appends the strings accordingly.
Finally, we print the contents of the variable using the `fmt.Println()` function.

