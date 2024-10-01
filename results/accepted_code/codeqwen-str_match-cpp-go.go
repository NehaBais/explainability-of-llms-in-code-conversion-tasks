package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	//Beginning
	if strings.HasPrefix(s1, s3) {
		fmt.Println("The first string starts with the second string")
	}

	//End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("The first string ends with the second string")
	}

	//Anywhere
	loc := strings.Index(s2, s3) //returns -1 if not found
	for loc != -1 {
		fmt.Printf("Match found at location: %d\n", loc)
		loc = strings.Index(s2, s3, loc+1) //continues from the next character
	}

	if loc == -1 {
		fmt.Println("No match found")
	}
}
