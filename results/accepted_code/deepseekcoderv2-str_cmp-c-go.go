package main

import (
	"fmt"
	"strconv"
)

func strcmp(a, b string) int {
	return len(a) - len(b)
}

func streq(a, b string) bool {
	return a == b
}

func streqCaseInsensitive(a, b string) bool {
	// TODO: Implement case-insensitive comparison of strings
	return false
}

func main() {
	fmt.Println("Comparison results for different cases:")
	cases := []struct {
		a        string
		b        string
		expected int // Expected value based on the expected outcome
	}{
		{"ball", "bell", 1}, // Ball is greater than bell (lexical order)
		{"YUP", "yep", -3},  // YUP is greater than yep (lexical order, case insensitive)
		{"ball", "BELL", 2}, // Ball is greater than BELL (lexical order, ignoring case)
		{"YUP", "YEPI", -4}, // YUP is greater than YEPI (lexical order, case-insensitive comparison)
		{"ball", "BALL", 1}, // Ball is equal to BALL (lexical order)
		{"bell", "BELL", 0}, // Bell is equal to BELL (lexical order, ignoring case)
		{"YUP", "yepi", -3}, // YUP is greater than yepi (lexical order, case-insensitive comparison)
	}

	for _, c := range cases {
		result := strcmp(c.a, c.b)
		fmt.Printf("%s %d\n", strconv.Itoa(result), result)
	}
}
