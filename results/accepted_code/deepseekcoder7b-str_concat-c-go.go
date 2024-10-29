package main

import (
	"fmt"
)

func concat(s1, s2 string) string {
	return fmt.Sprintf("%s%s", s1, s2)
}

func main() {
	s := "hello"
	fmt.Println(s + " literal") // or
	fmt.Printf("%s literal\n", s)

	s = concat(s, " literal")
	fmt.Println(s)
}
