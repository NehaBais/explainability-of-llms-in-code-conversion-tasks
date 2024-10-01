package main

import (
	"fmt"
)

func main() {
	var s1 string = "hello"
	s3 := s1 + " world"
	fmt.Println(s3)

	s2 := s1 + " world"
	fmt.Println(s2)

	s1 = "hello"
	s2 = s1 + ", world, mom"
	fmt.Println(s2)
}
