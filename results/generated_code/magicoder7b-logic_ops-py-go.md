 Below is the equivalent code in Golang:

```go
package main

import "fmt"

func logic(a, b bool) {
	fmt.Printf("a and b: %v\n", a && b)
	fmt.Printf("a or b : %v\n", a || b)
	fmt.Printf("not a: %v\n", !a)
}
```
This function `logic` takes two boolean values, `a`, and `b`. It then prints the result of "and" and "or" on both arguments as well as "not" on the first argument. The format specifier `%v` is used to print the value in its default format.
