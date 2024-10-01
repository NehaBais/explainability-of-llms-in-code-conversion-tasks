 In Go, you can achieve the same result with the following code:

```go
package main
import (
	"fmt"
)
func main() {
	var s = "hello"
	fmt.Println(s + " literal")
	var s2 = s + " literal"
	fmt.Println(s2)
}
```

In this Go code, `var` keyword is used to declare the variable. The same operation of concatenating strings is performed with `+` operator as in Java. Then the content of both variables is printed using `fmt.Println()`.
