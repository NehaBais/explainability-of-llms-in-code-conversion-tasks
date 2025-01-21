 Sure! Below is the equivalent Go code for the provided C code. This Go code demonstrates various string comparisons including exact equality, inequality, lexical order comparison, and case sensitivity.

```go
package main

import (
	"fmt"
	"strings"
)

// Define functions to compare strings
func STREQ(a, b string) bool {
	return a == b
}

func STRNE(a, b string) bool {
	return !STREQ(a, b)
}

func STRLT(a, b string) bool {
	return a < b
}

func STRLE(a, b string) bool {
	return a <= b
}

func STRGT(a, b string) bool {
	return !STRLE(a, b)
}

func STRGE(a, b string) bool {
	return !STRLT(a, b)
}

func STRCEQ(a, b string) bool {
	return strings.EqualFold(a, b)
}

func STRCNE(a, b string) bool {
	return !STRCEQ(a, b)
}

func STRCLT(a, b string) bool {
	return strings.ToLower(a) < strings.ToLower(b)
}

func STRCLE(a, b string) bool {
	return strings.ToLower(a) <= strings.ToLower(b)
}

func STRCGT(a, b string) bool {
	return !STRCLE(a, b)
}

func STRCGE(a, b string) bool {
	return !STRCLT(a, b)
}

// Function to print the comparison results
func compare(a, b string) {
	fmt.Printf("%s %2d%2d%2d%2d%2d%2d %s
", a, STREQ(a, b), STRNE(a, b), STRGT(a, b), STRLT(a, b), STRGE(a, b), STRLE(a, b), b)
}

// Function to print the case-insensitive comparison results
func compareCase(a, b string) {
	fmt.Printf("%s %2d%2d%2d%2d%2d%2d %s ignoring case
", a, STRCEQ(a, b), STRCNE(a, b), STRCGT(a, b), STRCLT(a, b), STRCGE(a, b), STRCLE(a, b), b)
}

func main() {
	arguments := []string{"ball", "bell", "ball", "ball", "YUP", "YEP"}
	fmt.Println("	eq , ne , gt , lt , ge , le")
	for i := 0; i < len(arguments); i += 2 {
		a := arguments[i]
		b := arguments[i+1]
		compare(a, b)
		compareCase(a, b)
	}
}
```

This Go code performs the following:
1. Compares two strings for exact equality and inequality.
2. Compares two strings to see if one is lexically ordered before or after the other.
3. Performs case-sensitive and case-insensitive comparisons.
4. Handles numeric string comparisons by treating them lexically, as Go does not inherently distinguish between numeric and alphanumeric strings for comparison purposes.

You can run this Go code in a similar manner to the provided Bash script to test the comparisons.
