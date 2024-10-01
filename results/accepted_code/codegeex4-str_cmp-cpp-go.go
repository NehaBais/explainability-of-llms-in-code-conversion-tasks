package main

import (
	"fmt"
	"strings"
)

func DemoCompare(a string, b string, semantically string) {
	equal := a == b
	notEqual := !equal
	orderedBefore := strings.Compare(a, b) < 0
	orderedAfter := strings.Compare(a, b) > 0

	fmt.Printf("%s and %s are %v exactly %s equal.\n", a, b, equal, semantically)
	fmt.Printf("%s and %s are %v %s unequal.\n", a, b, notEqual, semantically)
	fmt.Printf("%s is %v ordered before %s.\n", a, orderedBefore, b)
	fmt.Printf("%s is %v ordered after %s.\n", a, orderedAfter, b)
}

func main() {
	// Case-sensitive comparisons.
	DemoCompare("1.2.Foo", "1.3.Bar", "lexically")

	// Case-insensitive comparisons
	a := strings.ToLower("1.2.Foo")
	b := strings.ToLower("1.3.Bar")
	DemoCompare(a, b, "lexically")

	// Numeric comparisons; here 'float64' could be any type for which the
	// relevant conversion is defined, eg int, long, etc.
	numA, _ := strconv.ParseFloat(a, 64)
	numB, _ := strconv.ParseFloat(b, 64)
	DemoCompare(fmt.Sprintf("%f", numA), fmt.Sprintf("%f", numB), "numerically")
}
