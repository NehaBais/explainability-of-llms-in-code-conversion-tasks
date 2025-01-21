package main

import (
	"fmt"
	"strings"
)

func main() {
	// declare a string variable s1 and assign it the value "hello"
	var s1 string = "hello"

	// print the concatenated result of s1 and " world"
	fmt.Println(s1 + " world")

	// re-assign the same value to s2
	s2 := s1 + " world"

	// declare a slice of strings and concatenate them using a loop
	var sb strings.Builder
	for _, value := range []string{s1, "world", "mom"} {
		sb.WriteString(value)
		if value != sb.String()[len(sb.String())-1] {
			sb.WriteRune(',')
		}
	}
	fmt.Println(sb.String())

	// declare a slice of strings and concatenate them using the strings.Builder type
	var s3 = strings.Join([]string{s1, "world", "mom"}, ", ")
	fmt.Println(s3)
}
