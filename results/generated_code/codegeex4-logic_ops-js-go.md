In Go, you can use the `fmt` package for outputting data. The logical operators in Go are written as `&&` (AND), `||` (OR) and `!` (NOT). Here is your JavaScript code converted to Golang:

```go
package main

import (
	"fmt"
)

func logic(a, b bool) {
	fmt.Println("a AND b:", a && b)
	fmt.Println("a OR b:", a || b)
	fmt.Println("NOT a:", !a)
}

func main() {
	logic(true, true)
}
```

Please note that Go uses `bool` type for boolean values and the `fmt.Println()` function is used to print the results. To call your logic function, you can simply use `logic(a, b)`, replacing `a` and `b` with your desired boolean arguments.

Note: In Golang, unlike JavaScript, there's no built-in "print" functionality. Instead, Go uses the "fmt" package for outputting information, which is why we imported it in this code.
