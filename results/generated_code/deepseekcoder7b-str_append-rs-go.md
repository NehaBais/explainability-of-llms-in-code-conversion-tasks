In Golang, you can use the "+" operator to append a string with another one and also modify the original variable directly because strings are immutable in Golang. Here is how it could be done:

```go
package main
import (
	"fmt"
)

func main() {
	hello := "Hello world"
	hello = hello + "!!!!!!"
	fmt.Println(hello)
}
```
In this code, we first create a string variable `hello` and assign it the value of "Hello world". Then we append to it with "!!!!!!" using the "+" operator, and print the result after the operation. The original hello variable is not changed because strings in Go are immutable.

