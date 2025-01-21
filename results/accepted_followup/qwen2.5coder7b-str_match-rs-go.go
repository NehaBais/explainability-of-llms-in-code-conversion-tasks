package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch bool, index int) {
	if possibleMatch {
		fmt.Printf("Found match at pos %d\n", index)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	printMatch(strings.HasPrefix(s1, s3), 0)

	// Determining if the first string contains the second string at any location
	for i := 0; i < len(s1); i++ {
		if s1[i:i+len(s3)] == s3 {
			fmt.Printf("Found match at pos %d\n", i)
		}
	}

	// Determining if the first string ends with the second string
	printMatch(strings.HasSuffix(s2, s3), 0)
}
