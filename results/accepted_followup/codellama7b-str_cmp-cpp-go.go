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
		a = "1.3.Bar"
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