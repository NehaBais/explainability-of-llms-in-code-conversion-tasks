package main

import (
	"fmt"
	"strings"
)

func main() {
	// Strings to test with
	str1 := "abcd"
	str2 := "ab"
	str3 := "bb"
	str4 := "zn"
	str5 := "abab"

	// Part 1: Check if str1 starts with str2
	fmt.Println(strings.HasPrefix(str1, str2)) //returns true

	// Part 2: Check if str1 contains str2 at any location
	loc := strings.Index(str5, str3)
	if loc == -1 {
		fmt.Printf("str1 doesn't contain str2\n")
	} else {
		fmt.Printf("Found str2 at location: %d\n", loc)
	}

	// Part 3: Check if str1 ends with str2
	fmt.Println(strings.HasSuffix(str1, str4)) //returns false
}
