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

	fmt.Println(strings.Substring(s, n, n+m))
	fmt.Println(strings.Substring(s, n))
	fmt.Println(strings.TrimSuffix(s, "9"))
	if i := strings.Index(s, string(c)); i >= 0 {
		fmt.Println(strings.Substring(s, i, i+m))
	}
	if i := strings.Index(s, sub); i >= 0 {
		fmt.Println(strings.Substring(s, i, i+m))
	}
}
