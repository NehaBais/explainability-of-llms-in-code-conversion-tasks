```go
package main

import "fmt"

func Logic(a, b bool) {
	fmt.Printf("%v AND %v: %v\n", a, b, a && b)
	fmt.Printf("%v OR %v: %v\n", a, b, a || b)
	fmt.Printf("NOT %v: %v\n", a, !a)
}
```
In Go, the `&&` and `||` operators are short-circuiting boolean expressions. The `!` operator is used for negating a boolean value. The `print` function in JavaScript is replaced by the `fmt.Printf` method in Go.
