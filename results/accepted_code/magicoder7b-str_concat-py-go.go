package main

import (
	"fmt"
	"strings"
)

func main() {
	var s1 string = "hello"
	s2 := s1 + " world"
	fmt.Println(s1, s2)

	slice := []string{s1, "world", "mom"}
	s3 := strings.Join(slice, ", ")
	fmt.Println(s3)
}
