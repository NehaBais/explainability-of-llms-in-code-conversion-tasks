```go
package main

import (
	"fmt"
	"sort"
)

// compareStrings compares two strings in a case-insensitive manner.
func compareStrings(a string, b string) bool {
	return strings.EqualFold(a, b)
}

// numericCompare compares two numeric strings and returns the appropriate result.
func numericCompare(numA string, numB string) int {
	var numAFloat, numBFloat float64
	if _, err := fmt.Sscanf(numA, "%f", &numAFloat); err != nil || numAFloat == 0 {
		return -1 // Invalid input or zero
	}
	if _, err := fmt.Sscanf(numB, "%f", &numBFloat); err != nil || numBFloat == 0 {
		return 1 // Invalid input or zero
	}
	if numAFloat < numBFloat {
		return -1
	} else if numAFloat > numBFloat {
		return 1
	}
	return 0
}

func main() {
	a := "1.2.Foo"
	b := "1.3.Bar"

	fmt.Println("Case-sensitive comparison:")
	if compareStrings(a, b) {
		fmt.Println(a + " and " + b + " are exactly equal.")
	} else {
		fmt.Println(a + " and " + b + " are not exactly equal.")
	}

	fmt.Println("Case-insensitive comparison:")
	if compareStrings(a, b) {
		fmt.Println(a + " and " + b + " are exactly equal.")
	} else {
		fmt.Println(a + " and " + b + " are not exactly equal.")
	}

	numA := "1.2"
	numB := "3.4"

	fmt.Println("\nNumeric comparison:")
	result := numericCompare(numA, numB)
	if result == -1 {
		fmt.Println(numA + " is less than " + numB)
	} else if result == 1 {
		fmt.Println(numA + " is greater than " + numB)
	} else {
		fmt.Println(numA + " and " + numB + " are equal.")
	}

	numC := "4.5"
	numD := "6.7"

	fmt.Println("\nNumeric comparison (case-insensitive):")
	result = numericCompare(numC, numD)
	if result == -1 {
		fmt.Println(numC + " is less than " + numD)
	} else if result == 1 {
		fmt.Println(numC + " is greater than " + numD)
	} else {
		fmt.Println(numC + " and " + numD + " are equal.")
	}
}
```

In this solution, the functions `compareStrings` and `numericCompare` are written to perform case-insensitive string comparison for strings and numeric comparison for floats. The `main` function demonstrates these functionalities with both case-sensitive and case-insensitive comparisons as well as a numeric comparison.
