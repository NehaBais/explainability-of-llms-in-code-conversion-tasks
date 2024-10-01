 In Golang, you can achieve the same functionality with the help of a function and some built-in functions provided by Go. Here's how to convert your JavaScript code into Golang:

```go
package main

import (
	"fmt"
)

func logic(a, b bool) {
	fmt.Printf("a AND b: %v\n", a && b)
	fmt.Printf("a OR b: %v\n", a || b)
	fmt.Printf("NOT a: %v\n", !a)
}
```
This Golang code does exactly the same thing as your JavaScript function; it receives two boolean values and prints out the results of "and" ("&&"), "or" ("||") and "not" ("!").

Note that Go's print statements use `Printf` with `%v` to automatically convert their arguments into strings, and that `&`, `|`, `!` are the "and", "or" and "not" operators in Go. Also note that you don't have to explicitly declare types for booleans (as `bool`) in Go because they are a built-in type, unlike JavaScript where you need to specify data types of variables.
