package main

import (
	"fmt"
)

func main() {
	s1 := "hello"
	fmt.Println(s1 + " world") // prints hello world

	s2 := s1 + " world"
	fmt.Println(s2) // prints hello world

	s1 = "hello"
	fmt.Printf("%s, %s, %s\n", s1, "world", "mom") // prints hello, world, mom

	s2 = ", ".join([3]string{s1, "world", "mom"})
	fmt.Println(s2) // prints hello, world, mom
}
