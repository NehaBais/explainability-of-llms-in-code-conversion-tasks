Sure, here is how you can convert this JavaScript code to Go:

```go
package main
import (
	"fmt"
)
func main() {
	var s = "Hello"
	s = "World" + s // prepend string literal 'World' to the original string 'Hello'
	fmt.Println(s) 
}
```
This Go code does exactly what your original JavaScript code did: it creates a variable `s` and assigns it the value of "Hello". Then, it concatenates the new string "World" to the end of `s`, effectively prepending it. Finally, it prints out the result. 
You should note that Go is strictly typed, so you have to declare the variable type in your code unlike JavaScript where you can omit type declaration. Also, there is no print function in go, so I used fmt.Println instead.
