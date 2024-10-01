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
		fmt.Println("s1 starts with s3")
	}

	//End
	if strings.HasSuffix(s1, s3) {
		fmt.Println("s1 ends with s3")
	}

	//Anywhere
	index := strings.Index(s2, s3)
	for index != -1 {
		fmt.Printf("Found %s at position: %d\n", s3, index)
		index = strings.Index(s2[index+1:], s3)
	}
}
