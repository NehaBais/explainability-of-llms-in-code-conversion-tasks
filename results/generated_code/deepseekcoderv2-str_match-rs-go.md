Answer: 
```
package main

import (
	"fmt"
)

func printMatch(possibleMatch int, s1, s2, s3 string) {
	if possibleMatch != -1 {
		fmt.Printf("Found match at pos %d\n", possibleMatch)
	} else {
		fmt.Println("Did not find any matches")
	}
}

func main() {
	s1 := "abcd"
	s2 := "abab"
	s3 := "ab"

	// Determining if the first string starts with second string
	if s1[:len(s3)] == s3 {
		fmt.Println("s1 starts with s3")
	} else {
		fmt.Println("s1 does not start with s3")
	}
	// Determining if the first string contains the second string at any location
	possibleMatch := -1
	for i := 0; i <= len(s1)-len(s2); i++ {
		if s1[i:i+len(s2)] == s2 {
			printMatch(i, s1, s3, s2)
			break
		}
	}
	// Determining if the first string ends with the second string
	if s1[len(s1)-len(s2):] == s2 {
		fmt.Println("s1 ends with s3")
	} else {
		fmt.Println("s1 does not end with s3")
	}
}
```
