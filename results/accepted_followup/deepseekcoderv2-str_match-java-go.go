package main

import (
	"fmt"
	"strings"
)

func main() {
	// Test cases for startsWith
	fmt.Println(strings.HasPrefix("abcd", "ab")) // returns true

	// Test cases for endsWith
	fmt.Println(strings.HasSuffix("abcd", "zn")) // returns false

	// Test cases for contains
	fmt.Println(strings.Contains("abab", "bb")) // returns false
	fmt.Println(strings.Contains("abab", "ab")) // returns true

	// Test cases for indexOf with single occurrence
	index := strings.Index("abab", "bb") // returns -1
	fmt.Println(index)
	index = strings.Index("abab", "ab") // returns 0
	fmt.Println(index)

	// Test cases for indexOf with multiple occurrences
	loc := 0
	for {
		idx := strings.Index("abab", "ab", loc)
		if idx == -1 {
			break
		}
		fmt.Println(idx)
		loc = idx + 1
	}
}
