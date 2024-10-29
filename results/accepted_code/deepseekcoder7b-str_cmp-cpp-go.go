package main

import (
	"fmt"
	s "strings"
	u "unicode"
)

type DemoCompare func(a, b string, semantically string)

func demo_compare(a, b string, semantically string, f DemoCompare) {
	f(a, b, semantically)
}

// Comparison functions for each scenario
func exactlyEqual(a, b string, _ string){
	if a == b {
		fmt.Printf("'%s' and '%s' are exactly equal\n", a, b)
	} else{
		fmt.Printf("'%s' and '%s' are not exactly equal\n", a, b)
	}
}

func inexactlyEqual(a, b string, _ string){
	if a != b {
		fmt.Printf("'%s' and '%s' are inequal\n", a, b)
	} else{
		fmt.Printf("'%s' and '%s' are equal\n", a, b)
	}
}

func orderedBefore(a, b string, _ string){
	if a < b {
		fmt.Printf("'%s' is lexically ordered before %s\n", a, b)
	} else{
		fmt.Printf("'%s' is not lexically ordered before %s\n", a, b)
	}
}

func orderedAfter(a, b string, _ string){
	if a > b {
		fmt.Printf("'%s' is lexically ordered after %s\n", a, b)
	} else{<｜begin▁of▁sentence｜>
		fmt.Printf("'%s' is not lexically ordered after %s\n", a, b)
	}
}

// Converts the strings to lower case for case insensitive comparison
func toLower(str string) string {
	return s.ToLower(str)
}

func main()  {
	a := "1.2.Foo"
	b := "1.3.Bar"
	// Case-sensitive comparisons.
	demo_compare(a, b, "lexically", exactlyEqual)
	demo_compare(a, b, "lexically", inexactlyEqual)
	demo_compare(a, b, "lexically", orderedBefore)
	demo_compare(a, b, "lexically", orderedAfter)

	// Case-insensitive comparisons by folding both strings to a common case.
	a = toLower(a)
	b = toLower(b)
	demo_compare(a, b, "lexically", exactlyEqual)
	demo_compare(a, b, "lexically", inexactlyEqual)
	demo_compare(a, b, "lexically", orderedBefore)
	demo_compare(a, b, "lexically", orderedAfter)
}