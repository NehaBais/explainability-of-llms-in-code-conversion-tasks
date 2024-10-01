Sure, here is how you can convert this JavaScript code to Go:

```go
package main
import (
	"fmt"
)
func main() {
	var s1 = "Hello"
	s1 += ", World!"
	fmt.Println(s1)
}
```
This Go program does exactly the same as your original JavaScript code. It declares a string variable `s1` and assigns it the value "Hello". Then it appends to this string (which is also the variable's value) another string literal, which results in the string "Hello, World!". Finally, it prints out the contents of `s1` which are now "Hello, World!".
