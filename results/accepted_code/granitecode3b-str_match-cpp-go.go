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
	fmt.Println(strings.HasPrefix(s1, s3))
	//End
	fmt.Println(strings.HasSuffix(s1, s3))
	//Anywhere
	fmt.Println(strings.Contains(s1, s2))
}
