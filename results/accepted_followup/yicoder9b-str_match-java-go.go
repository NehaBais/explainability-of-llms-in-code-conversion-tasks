package main

import (
	"fmt"
	"strings"
)

func main() {
	// 1. Determine if a string starts with another string
	startsWith := strings.HasPrefix("abcd", "ab") //returns true
	fmt.Println(startsWith)

	// 2. Determine if a string ends with another string
	endsWith := strings.HasSuffix("abcd", "zn") //returns false
	fmt.Println(endsWith)

	// 3. Determine whether one string contains another
	contains := strings.Contains("abab", "bb") // returns false
	fmt.Println(contains)
	contains = strings.Contains("abcd", "ab") // returns true
	fmt.Println(contains)

	// 4. Finding the location of a substring within a string
	loc := strings.Index("abab", "bb") //returns -1
	fmt.Println(loc)
	loc = strings.Index("abab", "ab") //returns 0
	fmt.Println(loc)
	// Finding next occurrence of a substring within a string
	substr := "abab"[loc+1:]
	if strings.Contains(substr, "ab") {
		nextLoc := strings.Index(substr, "ab")
		fmt.Println(nextLoc + loc + 1) // returns 2
	} else {
		fmt.Println(-1)
	}
}
