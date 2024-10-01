package main

import "strings"
import "fmt"

func main() {
	a := "abc"
	b := "Bac"

	// Comparing two strings for exact equality
	if a == b {
		fmt.Println("The strings are equal")
	}

	// Comparing two strings for inequality (i.e., the inverse of exact equality)
	if a != b {
		fmt.Println("The strings are not equal")
	}

	// Strings are coerced to &str when borrowed and needed, we can directly compare them as Go will handle conversion implicitly for us.
	if a < b {
		fmt.Println("The first string is lexically before the second")
	}
	if a > b {
		fmt.Println("The first string is lexically after the second")
	}
	if a <= b {
		fmt.Println("The first string is not lexically before the second")
	}
	if a >= b {
		fmt.Println("The first string is not lexically after the second")
	}

	// Go doesn't have direct equivalent to Rust's `eq_ignore_ascii_case`, but it has a function for case-insensitive comparisons in `strings` package
	if strings.EqualFold(a, b) {
		fmt.Println("Both strings are equal when ignoring case")
	}
}
