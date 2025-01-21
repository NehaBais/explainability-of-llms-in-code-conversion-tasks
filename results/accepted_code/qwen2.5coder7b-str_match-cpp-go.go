package main

import (
	"fmt"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	fmt.Println(s1[:len(s3)] == s3)

	// End
	if len(s1) >= len(s3) {
		fmt.Println(s1[len(s1)-len(s3):] == s3)
	} else {
		fmt.Println(false)
	}

	// Anywhere
	loc := -1
	for i := 0; i <= len(s2)-len(s3); i++ {
		if s2[i:i+len(s3)] == s3 {
			if loc == -1 {
				loc = i
			} else {
				fmt.Println("Found at multiple locations.")
				return
			}
		}
	}

	if loc != -1 {
		fmt.Printf("First occurrence found at location %d\n", loc)
	} else {
		fmt.Println("String not found")
	}
}
