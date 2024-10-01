Sure! Here's the equivalent code in Go:
```
package main

import (
	"fmt"
)

func main() {
	a := "abc"
	b := "Bac"

	// Strings are coerced to &str when borrowed and needed
	if a == b {
		fmt.Println("The strings are equal")
	} else {
		fmt.Println("The strings are not equal")
	}

	if a != b {
		fmt.Println("The strings are not equal")
	} else {
		fmt.Println("The strings are equal")
	}

	if a > b {
		fmt.Println("The first string is lexically after the second")
	} else {
		fmt.Println("The first string is lexically before the second")
	}

	if a < b {
		fmt.Println("The first string is lexically before the second")
	} else {
		fmt.Println("The first string is lexically after the second")
	}

	// case-insensitives:

	// equality
	if a == strings.ToLower(b) {
		fmt.Println("Both strings are equal when ignoring case")
	} else {
		fmt.Println("The strings are not equal when ignoring case")
	}

	// everything else, create owned Strings, then compare as above
	a2 := strings.ToLower(a)
	b2 := strings.ToLower(b)

	if a2 == b2 {
		fmt.Println("Both strings are equal when ignoring case")
	} else {
		fmt.Println("The strings are not equal when ignoring case")
	}

	// repeat checks
}
```
Note that in Go, the `strings` package provides several functions for working with strings, including `ToLower`, which converts a string to lowercase. This is useful for comparing two strings without regard for case.
