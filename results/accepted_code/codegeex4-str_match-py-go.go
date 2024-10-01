package main

import (
	"fmt"
	"strings"
)

func main() {
	s1 := "abcd"
	s2 := "ab"
	fmt.Println(s1.startswith(s2)) // returns True

	s3 := "zn"
	fmt.Println(s1.endswith(s3)) // returns False

	s4 := "abab"
	s5 := "bb"
	fmt.Println(s4.contains(s5))   // returns false
	fmt.Println(s4.contains("ab")) // returns true

	locs := s4.findAllOccurrences("ab")
	for _, loc := range locs {
		fmt.Println(loc)
	}
}

func (s string) startswith(sub string) bool {
	return strings.HasPrefix(s, sub)
}

func (s string) endswith(sub string) bool {
	return strings.HasSuffix(s, sub)
}

func (s string) contains(sub string) bool {
	return strings.Contains(s, sub)
}

func (s string) findAllOccurrences(sub string) []int {
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
