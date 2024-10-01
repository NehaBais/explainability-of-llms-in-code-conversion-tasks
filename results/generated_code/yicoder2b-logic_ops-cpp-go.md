Sure, here's how you can convert this C++ function to Go:

```go
package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {
	fmt.Printf("%v and %v is %v\n", a, b, a && b)
	fmt.Printf("%v or %v is %v\n", a, b, a || b)
	fmt.Printf("not %v is %v\n", a, !a)
}
```
This Go function does exactly the same thing as your C++ version. The `Printf` function from the fmt package in Go allows you to interpolate variables directly into a string with the `%v` format specifier for variable output.
