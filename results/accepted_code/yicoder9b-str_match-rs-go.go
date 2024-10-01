package main

import (
	"fmt"
	"strings"
)

func printMatch(possibleMatch bool, pos int) {
	if possibleMatch {
		fmt.Printf("Found match at position %d\n", pos)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	startsWith, posStart := strings.Contains(s1, s3), 0
	if strings.HasPrefix(s1, s3) {
		startsWith, posStart = true, 0
	}
	printMatch(startsWith, posStart) // Found match at position 0
	// Determining if the first string contains the second string at any location
	contains, posContains := strings.Contains(s1, s3), -1
	if idx := strings.Index(s1, s3); idx >= 0 {
		contains, posContains = true, idx
	}
	printMatch(contains, posContains) // Found match at position 0
	// Print the location of the match
	endsWith, posEnd := strings.Contains(s2, s3), len(s2)-len(s3)
	if strings.HasSuffix(s2, s3) {
		endsWith = true
	}
	printMatch(endsWith, posEnd) // Found match at position 2
}
