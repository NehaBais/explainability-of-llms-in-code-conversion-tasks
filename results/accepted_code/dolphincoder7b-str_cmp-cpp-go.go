package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)

func CompareStrings(a, b string, semantically bool) {
	if a == b {
		fmt.Println(a, "and", b, "are", "exactly", "equal.")
	} else {
		fmt.Println(a, "and", b, "are", "not", "equal")
	}

	switch {
	case strings.Compare(a, b) == 0:
		if semantically {
			fmt.Println(a, "is", "lexically", "ordered before", b, ".")
		} else {
			fmt.Println(a, "is", "numerically", "less than", b, ".")
		}
	case strings.Compare(a, b) < 0:
		if semantically {
			fmt.Println(a, "is", "lexically", "ordered after", b, ".")
		} else {
			fmt.Println(a, "is", "numerically", "greater than", b, ".")
		}
	case strings.Compare(a, b) > 0:
		if semantically {
			fmt.Println(b, "is", "lexically", "ordered after", a, ".")
		} else {
			fmt.Println(b, "is", "numerically", "greater than", a, ".")
		}
	}
}
func main() {
	// Case-sensitive comparisons.
	a := "1.2.Foo"
	b := "1.3.Bar"
	CompareStrings(a, b, true)

	// Case-insensitive comparisons by folding both strings to a common case.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	CompareStrings(a, b, true)

	// Numeric comparisons; here 'float64' could be any type for which the
	// relevant > and < operators are defined.
	var numA, numB float64
	fmt.Sscanf(a, "%f", &numA)
	fmt.Sscanf(b, "%f", &numB)
	CompareStrings(strconv.Itoa(int(numA)), strconv.Itoa(int(numB)), false)
}
