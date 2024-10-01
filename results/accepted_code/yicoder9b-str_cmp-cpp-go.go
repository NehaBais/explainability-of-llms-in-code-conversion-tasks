package main

import (
	"fmt"
	"strconv"
	"strings"
)

func demoCompare(a, b interface{}, semantically string) {
	equals := a == b
	notEquals := a != b
	less := a < b
	greater := a > b

	fmt.Printf("%v and %v are %s exactly %s equal.\n", a, b, "", semantically)
	fmt.Printf("%v and %v are %s %sinequal.\n", a, b, "", semantically)
	fmt.Printf("%v is %s %s ordered before %v.\n", a, "", semantically, b)
	fmt.Printf("%v is %s %s ordered after %v.\n", a, "", semantically, b)
}

func main() {
	// Case-sensitive comparisons.
	a := "1.2.Foo"
	b := "1.3.Bar"
	demoCompare(a, b, "lexically")

	// Case-insensitive comparisons by converting both strings to lowercase.
	a = strings.ToLower(a)
	b = strings.ToLower(b)
	demoCompare(a, b, "lexically")

	// Numeric comparison; here 'numA' and 'numB' can be any type for which the relevant is a valid operation eg int, float etc.
	numA, _ := strconv.ParseFloat(a, 64) //assume error handling is done in context
	numB, _ := strconv.ParseFloat(b, 64)
	demoCompare(numA, numB, "numerically")
}
