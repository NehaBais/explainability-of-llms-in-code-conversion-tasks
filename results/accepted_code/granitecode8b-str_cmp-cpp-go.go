package main

import (
	"fmt"
	"io"
	"os"
	"strconv"
	"strings"
)

func main() {
	// Case-sensitive comparisons.
	a := ""
	if len(os.Args) > 1 {
		a = os.Args[1]
	}
	b := ""
	if len(os.Args) > 2 {
		b = os.Args[2]
	}
	fmt.Printf("%s and %s are %s equal.n", a, b, compareLexically(a, b))
	// Case-insensitive comparisons by folding both strings to a common case.
	aLower := strings.ToLower(a)
	bLower := strings.ToLower(b)
	fmt.Printf("%s and %s are %s equal.n", a, b, compareLexically(aLower, bLower))
	// Numeric comparisons; here 'double' could be any type for which the
	// relevant >> operator is defined, eg int, long, etc.
	numA, _ := strconv.ParseFloat(a, 64)
	numB, _ := strconv.ParseFloat(b, 64)
	fmt.Printf("%s and %s are %s equal.n", a, b, compareNumerically(numA, numB))
}
func compareLexically(a string, b string) string {
	if a == b {
		return "lexically"
	} else {
		return "not lexically"
	}
}
func compareNumerically(a float64, b float64) string {
	if a < b {
		return "numerically ordered before"
	} else if a > b {
		return "numerically ordered after"
	} else {
		return "numerically equal"
	}
}
