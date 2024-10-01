Here is the equivalent code in Go:

```go
package main

import (
	"fmt"
	"strings"
)

func compare(a string, b string) {
	eq := strings.EqualFold(a, b))

	fmt.Printf("%s%2d%2d%2d%2d%2d%2d 
",
	 a,
	 eq, !eq, STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b))

	fmt.Println()
}

func comparecase(a string, b string) {
	eq := strings.EqualFold(a, b))

	fmt.Printf("%s%2d%2d%2d%2d%2d%2d 
",
	 a,
	 eq, !eq, STRCGT(a, b), STRCLT(a, b), STRCGE(a, b), STRCLE(a, b))

	fmt.Println()
}

func main() {
	var a string = "YUP"
	var b string = "yep"

	compare(a, b)
	comparecase(a, b)
}
```

This code performs the following comparisons:
- It compares two strings for exact equality using `strings.EqualFold()` function.
- It then prints out whether each comparison is true (0), false (-1), or indeterminate (1). The output format uses ANSI escape codes to align and colorize the output, but this should not affect the interpretation of the code.
- Finally, it calls `comparecase()` function to compare two strings while ignoring case sensitivity using `strings.EqualFold()` function.

This code demonstrates how to perform various types of string comparisons in Go. The language's built-in functions and type system provide convenient ways to achieve different types of string comparisons.
