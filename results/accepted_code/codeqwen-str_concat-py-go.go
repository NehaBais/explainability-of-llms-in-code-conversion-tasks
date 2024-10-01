package main

import "fmt"

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world")

	s2 := s1 + " world"
	fmt.Println(s2)

	s1 = "hello"
	s3 := fmt.Sprintf("%v, %v, %v", s1, "world", "mom")
	fmt.Println(s3)

	s4 := fmt.Sprintf("%v, %v, %v", s1, "world", "mom")
	fmt.Println(s4)
}
