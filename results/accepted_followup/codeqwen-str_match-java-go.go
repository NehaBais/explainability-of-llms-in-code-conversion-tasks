package main

import (
	"fmt"
	"strings"
)

func main() {
	// Check if the first string starts with second string
	str1 := "abcd"
	str2 := "ab"
	if strings.HasPrefix(str1, str2) {
		fmt.Println("The first string starts with the second string")
	} else {
		fmt.Println("The first string does not start with the second string")
	}

	// Check if the first string ends with the second string
	if strings.HasSuffix(str1, str2) {
		fmt.Println("The first string ends with the second string")
	} else {
		fmt.Println("The first string does not end with the second string")
	}

	// Check if the first string contains the second string at any location
	if strings.Contains(str1, str2) {
		fmt.Println("The first string contains the second string")
	} else {
		fmt.Println("The first string does not contain the second string")
	}

	// Print the location of the match for part 2
	loc := strings.Index(str1, str2)
	if loc == -1 {
		fmt.Println("No match found in the first string for the second string")
	} else {
		fmt.Printf("The first string contains the second string at location %d\n", loc)
	}

	// Handle multiple occurrences of a string for part 2.
	for loc != -1 {
		fmt.Printf("Match found in the first string for the second string at location %d\n", loc)
		loc = strings.Index(str1, str2, loc+1) // Note: We pass the third argument to search after the last found match
	}
}
