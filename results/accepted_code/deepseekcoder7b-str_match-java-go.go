package main

import (
	"fmt"
	"strings"
)

func startWith(mainStr string, subStr string) bool {
	return strings.HasPrefix(mainStr, subStr)
}

func contains(mainStr string, subStr string) bool {
	return strings.Contains(mainStr, subStr)
}

func endWith(mainStr string, subStr string) bool {
	return strings.HasSuffix(mainStr, subStr)
}

func multipleOccurrences(mainStr string, subStr string) []int {
	locs := make([]int, 0)
	offset := 0
	for {
		index := strings.Index(mainStr[offset:], subStr)
		if index == -1 {
			break
		} else {
			locs = append(locs, offset+index)
			offset += index + 1 // move to next character after found substring
		}
	}
	return locs
}

func main() {
	fmt.Println("Start with:")
	fmt.Printf("startWith(\"abcd\", \"ab\"): %t\n", startWith("abcd", "ab")) //returns true
	fmt.Printf("endWith(\"abcd\", \"zn\"): %t\n", endWith("abcd", "zn"))     //returns false

	fmt.Println("\nContains:")
	fmt.Printf("contains(\"abab\", \"bb\"): %t\n", contains("abab", "bb")) //returns false
	fmt.Printf("contains(\"abab\", \"ab\"): %t\n", contains("abab", "ab")) //returns true

	fmt.Println("\nMultiple occurrences:")
	fmt.Println(multipleOccurrences("abab", "ab")) // [0, 2]
}
