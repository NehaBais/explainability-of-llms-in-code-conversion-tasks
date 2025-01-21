package main

import (
	"fmt"
	"strings"
)

func main() {
	// Part 1
	fmt.Println("Part 1:")
	fmt.Printf("%t", strings.HasPrefix("abcd", "ab"))  // Output: true
	fmt.Printf("%t", !strings.HasPrefix("abcd", "zn")) // Output: false
	// Part 2
	fmt.Println("Part 2:")
	fmt.Printf("%t", strings.Contains("abab", "bb")) // Output: false
	fmt.Printf("%t", strings.Contains("abab", "ab")) // Output: true
	index := strings.Index("abab", "bb")
	if index != -1 {
		fmt.Println("Location of match:", index)
	} else {
		fmt.Println("No match found.")
	}
	index = strings.Index("abab", "ab")
	if index != -1 {
		fmt.Println("Location of match:", index)
	} else {
		fmt.Println("No match found.")
	}
	index = strings.Index("abab", "ab") + 1
	index = strings.Index("abab", "bb", index)
	if index != -1 {
		fmt.Println("Location of match:", index)
	} else {
		fmt.Println("No match found.")
	}
}
