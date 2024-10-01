package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch int) {
	if possibleMatch != -1 {
		fmt.Printf("Found match at pos %d\n", possibleMatch)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	if strings.HasPrefix(s1, s3) {
		fmt.Println("The first string starts with the second string")
	} else {
		fmt.Println("The first string does not start with the second string")
	}

	// Determining if the first string contains the second string at any location
	if strings.Contains(s1, s3) {
		fmt.Println("The first string contains the second string")
	} else {
		fmt.Println("The first string does not contain the second string")
	}

	// Print the location of the match
	printMatch(strings.Index(s1, s3)) // Found match at pos 0
	printMatch(strings.Index(s1, s2)) // Did not find any matches

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s1, s3) {
		fmt.Println("The first string ends with the second string")
	} else {
		fmt.Println("The first string does not end with the second string")
	}
}
