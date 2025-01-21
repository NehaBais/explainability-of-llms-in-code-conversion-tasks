package main

import (
	"fmt"
)

func main() {
	s := "0123456789"

	n := 3
	m := 4
	c := '2'
	sub := "456"

	fmt.Println(s[n:n+m])
	fmt.Println(s[n:])
	fmt.Println(s[:len(s)-1])
	fmt.Println(s[::s.Index(c)+1:m])
	fmt.Println(s[::s.Index(sub)+1:m])
}