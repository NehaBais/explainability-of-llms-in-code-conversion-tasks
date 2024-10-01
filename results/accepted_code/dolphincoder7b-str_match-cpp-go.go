package main

import "fmt"
import "strings"

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("True: first string starts with second string")
	} else {
		fmt.Println("False: first string does not start with second string")
	}

	// Ending
	if strings.HasSuffix(s1, s3) {
		fmt.Println("True: first string ends with second string")
	} else {
		fmt.Println("False: first string does not end with second string")
	}

	// Anywhere
	if strings.Contains(s2, s3) {
		loc := strings.Index(s2, s3)
		fmt.Printf("True: second string is found at index %d\n", loc)
	} else {
		fmt.Println("False: second string is not found in the first string")
	}

	// Multiple occurrences
	for i := 1; ; i++ {
		loc = strings.Index(s2, s3)
		if loc == -1 {
			break
		}

		fmt.Printf("True: second string is found at index %d\n", loc)
		s2 = s2[loc+len(s3):]
	}
}
