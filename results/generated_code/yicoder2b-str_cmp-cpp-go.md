Here is the equivalent code in Golang:

```golang
package main

import (
	"fmt"
	"strings"
	"unicode"
)

func demoCompare(a, b string, semantically string) {
	// Compare exact equality.
	if a == b {
		fmt.Printf("%s and %s are exactly equal.\n", a, b)
	} else {
		fmt.Printf("%s and %s are not exactly equal.\n", a, b)
	}

	// Compare inequality (inverse of exact equality).
	if a != b {
		fmt.Printf("%s and %s are notequal.\n", a, b)
	} else {
		fmt.Printf("%s and %s are exactly equal.\n", a, b)
	}

	// Compare lexically ordering.
	if strings.Compare(a, b) < 0 {
		fmt.Printf("%s is lexically ordered before than %s.\n", a, b)
	} else if strings.Compare(a, b) > 0 {
		fmt::Printf("%s is not lexically ordered before than %s.\n", a, b)
	} else {
		fmt.Printf("%s and %s are equal in order of lexical comparison.\n", a, b)
	}

	// Compare inverse ordering.
	if strings.Compare(a, b) > 0 {
		fmt.Printf("%s is lexically ordered after than %s.\n", a, b)
	} else if strings.Compare(a, b) < 0 {
		fmt::Printf("%s is not lexically ordered after than %s.\n", a, b)
	} else {
		fmt.Printf("%s and %s are equal in order of lexical comparison.\n", a, b)
	}
}

func main() {
	// Case-sensitive comparisons.
	demoCompare("1.2.Foo", "1.3.Bar", "lexically")

	// Case-insensitive comparisons by folding both strings to a common case.
	a := strings.ToLower("1.2.Foo")
	b := strings.ToLower("1.3.Bar")
	demoCompare(a, b, "lexically")

	// Numeric comparisons; here 'float64' could be any type for which the
	// relevant >> operator is defined, eg int, long, etc.
	numA := 1.2
	numB := 1.3
	demoCompare(fmt.Sprintf("%v", numA), fmt.Sprintf("%v", numB), "numerically")
}
```
