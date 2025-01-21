package main

import (
	"fmt"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	fmt.Println(s1[:len(s3)] == s3)
	fmt.Println(s1[len(s1)-len(s3):] == s3)
	var loc int
	loc = strings.Index(s1, s2)

	if loc != -1 {
		fmt.Printf("Found %s at position %d in string %s\n", s2, loc+1, s1)
	}

	for i := 0; i < len(s1); i++ {
		if strings.Contains(s1[i:], s3) {
			fmt.Printf("Found %s at position %d in string %s\n", s3, i+1, s1)
		}
	}
}
