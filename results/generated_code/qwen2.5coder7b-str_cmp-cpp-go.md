Here is how you can convert the given C++ code to Go:

```go
package main

import (
	"fmt"
	"strings"
)

func demoCompare(a string, b string, semantically string) {
	fmt.Println(a, "and", b, "are ", a == b, semantically, "exactly equal.")
	fmt.Println(a, "and", b, "are ", a != b, semantically, "inequal.")
	fmt.Println(a, "is ", a < b, semantically, "ordered before", b)
	fmt.Println(a, "is ", a > b, semantically, "ordered after", b)
}

func main() {
	// Case-sensitive comparisons.
	a := "1.2.Foo"
	b := "1.3.Bar"
	demoCompare(a, b, "lexically")

	// Case-insensitive comparisons by folding both strings to a common case.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demoCompare(a, b, "lexically")
	
	// Numeric comparisons.
	numA, _ := strconv.ParseFloat(a, 64)
	numB, _ := strconv.ParseFloat(b, 64)
	demoCompare(fmt.Sprintf("%.2f", numA), fmt.Sprintf("%.2f", numB), "numerically")
}
```

This Go code demonstrates how to compare two strings for exact equality and inequality. It also shows comparing strings for lexical order before or after each other in a case-sensitive manner, as well as a case-insensitive comparison. The numeric comparisons are done using the `strconv.ParseFloat` function which converts the string to a float64 number. Also note that we are formatting the float numbers up to 2 decimal places using `fmt.Sprintf("%.2f", numA)`.
