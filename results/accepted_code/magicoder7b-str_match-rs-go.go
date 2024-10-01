package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch *int) {
	if possibleMatch != nil {
		fmt.Printf("Found match at pos %d\n", *possibleMatch)
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
		fmt.Println("Found match")
	}

	// Determining if the first string contains the second string at any location
	pos := strings.Index(s1, s3)
	printMatch(&pos) // Found match at pos 0

	pos = strings.Index(s1, s2)
	if pos == -1 {
		printMatch(nil) // Did not find any matches
	} else {
		printMatch(&pos) // Found match at pos 0
	}

	// Determining if the first string ends with the second string
	if strings.HasSuffix(s2, s3) {
		fmt.Println("Found match")
	}
}
