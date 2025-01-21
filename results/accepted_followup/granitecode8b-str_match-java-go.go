package main

import (
	"fmt"
	"strings"
)

func main() {
	str1 := "abcd"
	str2 := "ab"
	// Determining if the first string starts with second string
	fmt.Println(strings.HasPrefix(str1, str2)) // Output: true

	// Determining if the first string contains the second string at any location
	loc := strings.Index(str1, str2)
	fmt.Println("Location of match:", loc) // Output: Location of match: 0

	// Determining if the first string ends with the second string
	fmt.Println(strings.HasSuffix(str1, str2)) // Output: false
}
