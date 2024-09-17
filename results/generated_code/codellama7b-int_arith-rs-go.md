Sure! Here's the equivalent code in Go:
```go
package main

import (
	"fmt"
	"os"
)

func main() {
	args := os.Args[1:]
	a, _ := strconv.ParseInt(args[0], 10, 64)
	b, _ := strconv.ParseInt(args[1], 10, 64)

	fmt.Println("sum:", a+b)
	fmt.Println("difference:", a-b)
	fmt.Println("product:", a*b)
	fmt.Println("integer quotient:", a/b) // truncates towards zero
	fmt.Println("remainder:", a%b) // same sign as first operand
}
```
Note that in Go, you don't need to explicitly specify the type of a variable when it is being declared and initialized at the same time. Also, in Go, if you want to handle an error when parsing a string as an integer, you can use `strconv.Atoi` instead of `strconv.ParseInt`.

Also, in Go, you don't need to specify the type of the variable in the function signature like you do in Rust. The compiler will infer the types for you based on the usage of the variables inside the function.
