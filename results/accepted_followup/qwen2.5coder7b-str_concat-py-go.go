package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	// Manually join multiple strings with ", "
	s3 := ""
	for i, str := range []string{s1, "world", "mom"} {
		if i != 0 {
			s3 += ", "
		}
		s3 += str
	}

	fmt.Println(s3)
}
