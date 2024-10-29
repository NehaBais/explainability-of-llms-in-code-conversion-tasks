package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world") //prints hello world

	s2 := s1 + " world"
	fmt.Println(s2) //prints hello world

	s3 := fmt.Sprintf("%s, %s, %s", s1, "world", "mom")
	fmt.Println(s3) //prints hello, world, mom

	//In Golang there is no direct equivalent of Python's join for strings so we use Sprintf as an alternative.
}
