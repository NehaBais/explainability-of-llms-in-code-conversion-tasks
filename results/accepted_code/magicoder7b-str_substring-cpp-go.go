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

	// substr(n, m)
	fmt.Println(s[n : n+m])

	// substr(n)
	fmt.Println(s[n:])

	// substr(0, s.size()-1)
	fmt.Println(s[:len(s)-1])

	// substr(s.find(c), m)
	cIndex := strings.IndexRune(s, c)
	if cIndex != -1 {
		fmt.Println(s[cIndex : cIndex+m])
	} else {
		fmt.Println("Character not found")
	}

	// substr(s.find(sub), m)
	subIndex := strings.Index(s, sub)
	if subIndex != -1 {
		fmt.Println(s[subIndex : subIndex+m])
	} else {
		fmt.Println("Substring not found")
	}
}
