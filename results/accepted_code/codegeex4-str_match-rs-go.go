package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch *string) {
	if possibleMatch != nil {
		fmt.Println("Found match at pos", *possibleMatch)
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
		fmt.Println("s1 starts with s3")
	} else {
		fmt.Println("s1 does not start with s3")
	}

	// Determining if the first string contains the second string at any location
	if strings.Contains(s1, s3) {
		fmt.Println("s1 contains s3")
	} else {
		fmt.Println("s1 does not contain s3")
	}

	// Print the location of the match for part 2
	pos := strings.Index(s1, s3)
	printMatch(&pos)

	if strings.Contains(s1, s2) {
		fmt.Println("s1 contains s2")
	} else {
		fmt.Println("s1 does not contain s2")
	}

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s2, s3) {
		fmt.Println("s2 ends with s3")
	} else {
		fmt.Println("s2 does not end with s3")
	}
}
