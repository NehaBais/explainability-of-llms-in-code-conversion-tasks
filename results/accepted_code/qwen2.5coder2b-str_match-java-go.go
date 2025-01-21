package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"

	// StartsWith
	result1 := strings.HasPrefix(str1, str2)
	fmt.Println("startsWith:", result1) // returns true

	// EndsWith
	result2 := strings.HasSuffix(str1, str2)
	fmt.Println("endsWith:", result2) // returns false

	// Contains
	result3 := strings.Contains(str1, str2)
	fmt.Println("contains:", result3) // returns false

	// Count occurrences (part 2)
	loc1 := strings.Index(str1, str2)
	fmt.Printf("indexOf first occurrence of '%s' is %d\n", str2, loc1)

	if loc1 == -1 {
		fmt.Println("No occurrence found.")
		return
	}

	// Find subsequent occurrences
	var loc2 = loc1 + len(str2)
	for {
		loc3 := strings.Index(str1[loc2:], str2)
		if loc3 == -1 {
			break
		}
		fmt.Printf("indexOf next occurrence of '%s' is %d\n", str2, loc3+loc2)
		loc2 = loc3 + len(str2)
	}
}
