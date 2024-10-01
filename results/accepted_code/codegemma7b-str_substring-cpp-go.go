package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(strings.Repeat("*", 30))
	fmt.Println(strings.Repeat("*", 30))

	fmt.Println(s[n : n+m])
	fmt.Println(s[n:])
	fmt.Println(s[:len(s)-1])
	fmt.Println(s[strings.IndexByte(s, c) : n+m])
	fmt.Println(s[strings.Index(s, sub) : n+m])

	fmt.Println(strings.Repeat("*", 30))
	fmt.Println(strings.Repeat("*", 30))
}
