package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch int) {
	if possibleMatch < 0 {
		fmt.Println("Did not find any matches")
	} else {
		fmt.Printf("Found match at pos %d\n", possibleMatch)
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	if strings.HasPrefix(s1, s3) {
		fmt.Println("The string starts with the prefix")
	} else {
		fmt.Println("The string does not start with the prefix")
	}

	// Determining if the first string contains the second string at any location
	if strings.Contains(s1, s3) {
		fmt.Println("The string contains the substring")
		// Print the location of the match
		matchPos := strings.Index(s1, s3)
		printMatch(matchPos)
	} else {
		fmt.Println("The string does not contain the substring")
		printMatch(-1)
	}

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s2, s3) {
		fmt.Println("The string ends with the suffix")
	} else {
		fmt.Println("The string does not end with the suffix")
	}
}
