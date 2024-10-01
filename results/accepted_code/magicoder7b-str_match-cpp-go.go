package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("String 1 starts with string 2")
	}

	// End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("String 1 ends with string 2")
	}

	// Anywhere
	loc := strings.Index(s1, s3)
	if loc != -1 {
		fmt.Printf("First occurrence of '%v' in String 1 is at position: %v\n", s2, loc)
		for i := loc + 1; ; i++ {
			loc = strings.Index(s1[i:], s3)
			if loc == -1 || (i+loc) >= len(s1) {
				break
			} else {
				fmt.Printf("Subsequent occurrence of '%v' in String 1 is at position: %v\n", s2, i+loc)
			}
		}
	} else {
		fmt.Println("String 2 not found in String 1")
	}
}
