package main

import (
	"fmt"
	"strings"
)

func startsWith(container, target string) bool {
	return strings.HasPrefix(container, target)
}

func endsWith(container, target string) bool {
	return strings.HasSuffix(container, target)
}

func doesContain(container, target string) (bool, int) { // Returns boolean and index of match
	if idx := strings.Index(container, target); idx >= 0 {
		return true, idx
	}
	return false, -1
}

func main() {
	fmt.Printf("Starts with Test (Hello, Hell): %t\n", startsWith("Hello", "Hell"))
	fmt.Printf("Ends with Test (Code, ode): %t\n", endsWith("Code", "ode"))
	// Handles multiple occurrences of a string
	results := strings.Split("Google Microsoft Code Hello Hell Google", " ")
	for _, result := range results {
		contains, index := doesContain(result, "Google")
		if contains {
			fmt.Printf("Contains Test: %s at index %d\n", result, index)
		} else {
			fmt.Println("Not found in string:", result)
		}
	}
}
