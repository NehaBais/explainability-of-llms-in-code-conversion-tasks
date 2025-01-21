package main

import (
	"fmt"
)

func printMatch(possibleMatch *int) {
	if possibleMatch != nil && *possibleMatch != -1 {
		fmt.Printf("Found match at pos %d\n", *possibleMatch))
	} else {
		fmt.Println("Did not find any matches"))
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	if s1.HasPrefix(s3) {
		fmt.Println("String 1 starts with String 2")
	} else {
		fmt.Println("String 1 does not start with String 2")
	}

	if s1.Contains(s3) {
		fmt.Println("String 1 contains String 2 at some location")
	} else {
		fmt.Println("String 1 does not contain String 2 at any location")
	}

	matchPos := int(-1)) // Initialize to a value that will not match with s1 or s2.
	if index := strings.Index(s1, s3)); index != -1 {
		matchPos = index
		fmt.Println("Found match at pos", matchPos)
	}

	if s1.HasSuffix(s2) {
		fmt.Println("String 1 ends with String 2")
	} else {
		fmt.Println("String 1 does not end with String 2")
	}
}