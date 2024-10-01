In Go language, you can convert the given C code into a function by replacing `printf` with `fmt.Printf`. Here's how the converted Go code would look:

```go
package main

import (
	"fmt"
)

func printLogic(a bool, b bool) {
	fmt.Println("a and b is", a && b)
	fmt.Println("a or b is", a || b)
	fmt.Println("not a is", !a)
}
```

In this Go function `printLogic`, the arguments `a` and `b` are boolean types. The `fmt.Println` function is used instead of `printf` to print the output.

Please note that in Go, the logical operators (`&&`, `||`) return a boolean value (`true` or `false`). So you don't need to cast them into integer before printing as done in C. If you still want to treat them as integers (0 and 1) when printing, you can do:

func printLogic(a bool, b bool) {
	fmt.Println("a and b is", int(a && b))
	fmt.Println("a or b is", int(a || b))
	fmt.Println("not a is", int(!a))
}

In this case, the result of each logical operation will be converted to an integer before being printed.
