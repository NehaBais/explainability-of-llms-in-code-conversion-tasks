package main

import (
	"fmt"
	"strings"
)

func main() {
	// Test cases for startsWith
	fmt.Println(strings.HasPrefix("abcd", "ab")) // returns True

	// Test cases for endsWith
	fmt.Println(strings.HasSuffix("abcd", "zn")) // returns False

	// Test cases for contains (at any location)
	fmt.Println(strings.Contains("abab", "bb")) // returns False
	fmt.Println(strings.Contains("abab", "ab")) // returns True

	// Find the first occurrence of a substring
	loc := strings.Index("abab", "bb") // returns -1
	fmt.Println(loc)

	loc = strings.Index("abab", "ab") // returns 0
	fmt.Println(loc)

	// Find subsequent occurrences of a substring
	loc = strings.Index("abab", "ab") // returns 0
	if loc != -1 {
		nextLoc := strings.Index("abab", "ab", loc+len("ab")) // returns 2
		fmt.Println(nextLoc)
	}
}
