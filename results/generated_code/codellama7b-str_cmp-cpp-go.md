
Here's the equivalent code in Go:
```go
package main

import (
	"fmt"
	"strings"
)

func demoCompare(a, b string, semantically string) {
	fmt.Println(a + " and " + b + " are " + ((a == b) ? "" : "not ") + "exactly " + semantically + " equal.")

	fmt.Println(a + " and " + b + " are " + ((a != b) ? "" : "not ") + semantically + "inequal.")

	fmt.Println(a + " is " + ((a < b) ? "" : "not ") + semantically + " ordered before " + b + ".")

	fmt.Println(a + " is " + ((a > b) ? "" : "not ") + semantically + " ordered after " + b + ".")
}

func main() {
	// Case-sensitive comparisons.
	var a, b string
	if len(os.Args) > 1 {
		a = os.Args[1]
	} else {
		a = "1.2.Foo"
	}
	if len(os.Args) > 2 {
		b = os.Args[2]
	} else {
		b = "1.3.Bar"
	}
	demoCompare(a, b, "lexically")

	// Case-insensitive comparisons by folding both strings to a common case.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demoCompare(a, b, "lexically")

	// Numeric comparisons; here 'double' could be any type for which the
	// relevant >> operator is defined, eg int, long, etc.
	var numA, numB float64
	fmt.Sscanf(a, "%f", &numA)
	fmt.Sscanf(b, "%f", &numB)
	demoCompare(numA, numB, "numerically")
}
```
Note that in Go, the `os` package provides access to the operating system's environment variables and arguments, while the `strings` package provides functions for working with strings. In this code, we use the `os.Args` slice to get the command-line arguments passed to the program, and then convert them to string values using the `fmt.Sscanf()` function. We also use the `strings.ToLower()` function to fold both strings to a common case before comparing them.

In terms of comparison operators, Go provides the standard comparison operators (`==`, `!=`, `<`, `>`) for all types that support these operations, including string and numeric types. However, since Go is a statically-typed language, we need to use the appropriate type for the comparison, such as `float64` for a numeric comparison.
