package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "ab"
	fmt.Println(StartsWith(s1, s2)) // returns True

	s3 := "zn"
	fmt.Println(EndsWith(s1, s3)) // returns False

	s4 := "abab"
	s5 := "bb"
	fmt.Println(Contains(s4, s5))   // returns false
	fmt.Println(Contains(s4, "ab")) // returns true

	locs := FindAllOccurrences(s4, "ab")
	for _, loc := range locs {
		fmt.Println(loc)
	}
}

func StartsWith(s string, sub string) bool {
	return strings.HasPrefix(s, sub)
}

func EndsWith(s string, sub string) bool {
	return strings.HasSuffix(s, sub)
}

func Contains(s string, sub string) bool {
	return strings.Contains(s, sub)
}

func FindAllOccurrences(s string, sub string) []int {
	var locs []int
	for i := 0; ; i = i + len(sub) {
		j := strings.Index(s[i:], sub)
		if j < 0 {
			break
		}
		locs = append(locs, i+j)
	}
	return locs
}
