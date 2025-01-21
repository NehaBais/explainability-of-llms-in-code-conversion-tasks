package main

import (
	"fmt"
)

func printMatch(possibleMatch int, str1, str2 string) {
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
	if !startsWith(s1, s3) {
		fmt.Println("Assertion failed: s1 does not start with s3")
	}

	// Determining if the first string contains the second string at any location
	if !contains(s1, s3) {
		fmt.Println("Assertion failed: s1 does not contain s3")
	}

	// Print the location of the match
	printMatch(find(s1, s3), s1, s3) // Found match at pos 0
	printMatch(find(s1, s2), s1, s2) // Did not find any matches

	// Determining if the first string ends with the second string
	if !endsWith(s2, s3) {
		fmt.Println("Assertion failed: s2 does not end with s3")
	}
}

func startsWith(str1, str2 string) bool {
	return len(str1) >= len(str2) && str1[:len(str2)] == str2
}

func contains(str1, str2 string) bool {
	return indexOf(str1, str2) != -1
}

func find(str1, str2 string) int {
	index := indexOf(str1, str2)
	if index != -1 {
		return index
	}
	return -1
}

func endsWith(str1, str2 string) bool {
	return len(str1) >= len(str2) && str1[len(str1)-len(str2):] == str2
}

func indexOf(s, substr string) int {
	n := len(substr)
	for i := 0; i <= len(s)-n; i++ {
		if s[i:i+n] == substr {
			return i
		}
	}
	return -1
}
