package main

import (
	"fmt"
)

func concatStrings(s1 string, s2 string) string {
	return s1 + s2
}

func main() {
	s := "hello"

	fmt.Printf("%s literal\n", s))

	/* or */
	fmt.Printf("%s%s\n", s, "literal"))

	s2 := concatStrings(s, " literal"))
	fmt.Println(s2))
	// Remember to free the memory allocated for s2
}