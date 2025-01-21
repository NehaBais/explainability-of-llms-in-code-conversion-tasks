package main

import "fmt"

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	fmt.Println(s1[:len(s3)])

	// End
	fmt.Println(s1[len(s1)-len(s3):])

	// Anywhere
	if loc, err := s2.Index(s3); err == nil {
		fmt.Println("Found at location:", loc)
	} else {
		fmt.Println("Not found")
	}
}
