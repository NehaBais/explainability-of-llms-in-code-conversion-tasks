package main

import "fmt"

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"
	// Beginning
	fmt.Println(s1[:len(s3)] == s3)
	// End
	fmt.Println(s1[len(s1)-len(s3):] == s3)
	// Anywhere
	loc := strings.Index(s2, s3)
	if loc != -1 {
		fmt.Println("Match found at location:", loc)
	} else {
		fmt.Println("No match found")
	}
}
