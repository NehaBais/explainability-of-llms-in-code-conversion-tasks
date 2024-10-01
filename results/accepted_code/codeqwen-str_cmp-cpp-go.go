package main

import (
	"fmt"
	"strings"
)

func demo_compare(A string, B string, semantically string) {
	isEqual := A == B
	isNotEqual := !isEqual

	if isCaseSensitiveComparison() {
		fmt.Printf("%s and %s are %s equal.\n", A, B, (isNotEqual ? "not" : ""))
		fmt.Printf("%s and %s are %s unequal.\n", A, B, (isNotEqual ? "" : "not"))
	} else {
		A = strings.ToLower(A)
		B = strings.ToLower(B)

		isEqual = A == B
		isNotEqual = !isEqual

		fmt.Printf("%s and %s are %s equal.\n", A, B, (isNotEqual ? "not" : ""))
		fmt.Printf("%s and %s are %s unequal.\n", A, B, (isNotEqual ? "" : ""))
	}

	if IsLexicalComparison() {
		isBefore := strings.Compare(A, B) < 0
		isAfter := strings.Compare(A, B) > 0

		fmt.Printf("%s is %s ordered before %s.\n", A, (isBefore ? "" : "not"), B)
		fmt.Printf("%s Is %s ordered after %s.\n", A, (isAfter ? "" : "not"), B)
	}

	if IsNumericComparison() {
		var numA, numB float64
		fmt.Sscan(A, &numA)
		fmt.Sscan(B, &numB)

		isEqual = numA == numB
		isNotEqual = !isEqual

		fmt.Printf("%s and %s are %s equal.\n", A, B, (isNotEqual ? "not" : ""))
		fmt.Printf("%s and %s are %s unequal.\n", A, B, (isNotEqual ? "" : ""))
	}
}

func IsCaseSensitiveComparison() bool {
	return true // or false based on your requirements
}

func IsLexicalComparison() bool {
	return true // or false based on your requirements
}

func IsNumericComparison() bool {
	return true // or false based on your requirements
}

func main(argc int, argv []string) {
	// Case-sensitive comparisons.
	A := (argc > 1) ? argv[1] : "1.2.Foo"
	B := (argc > 2) ? argv[2] : "1.3.Bar"

	demo_compare(A, B, "lexically")

	// Case-insensitive comparisons by folding both strings to a common case.
	A = strings.ToLower(A)
	B = strings.ToLower(B)

	demo_compare(A, B, "lexically")

	// Numeric comparisons; here 'double' could be any type for which the
	// relevant >> operator is defined, eg int, long, etc.
	numA := 0.0
	numB := 0.0
	fmt.Sscan(A, &numA)
	fmt.Sscan(B, &numB)

	demo_compare(numA, numB, "numerically")
}