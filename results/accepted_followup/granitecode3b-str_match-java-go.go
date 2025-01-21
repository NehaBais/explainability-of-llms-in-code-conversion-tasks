package main

import (
	"fmt"
	"strings"
)

func main() {
	// ... rest of the code
}

// Define string-related functions here
func StartsWith(s, substring string) bool {
	return strings.HasPrefix(s, substring)
}
func EndsWith(s, substring string) bool {
	return strings.HasSuffix(s, substring)
}
func Contains(s, substring string) bool {
	return strings.Contains(s, substring)
}
func IndexOf(s, substring string, start int) int {
	return strings.Index(s, substring, start)
}
