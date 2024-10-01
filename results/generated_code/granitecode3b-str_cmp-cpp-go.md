Sure! Here's the equivalent Golang code for the provided C++ code:
```go
package main
import (
	"fmt"
	"strings"
)
func demo_compare(a, b string, semantically string) {
	fmt.Println(a, "and", b, "are", ((a == b) ? "" : "not "), "exactly", semantically, "equal.")
	fmt.Println(a, "and", b, "are", ((a != b) ? "" : "not "), semantically, "inequal.")
	fmt.Println(a, "is", ((a < b) ? "" : "not "), semantically, "ordered before", b, ".")
	fmt.Println(a, "is", ((a > b) ? "" : "not "), semantically, "ordered after", b, ".")
}
func main() {
	// Case-sensitive comparisons.
	a := "1.2.Foo"
	b := "1.3.Bar"
	demo_compare(a, b, "lexically")

	// Case-insensitive comparisons by folding both strings to a common case.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demo_compare(a, b, "lexically")

	// Numeric comparisons; here 'double' could be any type for which the
	// relevant >> operator is defined, eg int, long, etc.
	var numA, numB float64
	fmt.Sscanf(a, "%f", &numA)
	fmt.Sscanf(b, "%f", &numB)
	demo_compare(fmt.Sprintf("%g", numA), fmt.Sprintf("%g", numB), "numerically")
}
```
This Golang code compares two strings for exact equality, inequality, and ordering using the `==`, `!=`, `<`, and `>` operators respectively. It also demonstrates case-insensitive and numeric comparisons by folding strings to a common case and converting numeric strings to floats before comparison. The output is similar to the C++ code's output, showing whether the two strings are exactly equal, inequal or ordered before/after each other.

