package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "0123456789"

	n, m := 3, 4
	c := '2'
	sub := "456"

	fmt.Println(s[n : n+m])
	fmt.Println(s[n:])
	fmt.Println(s[:len(s)-1])
	fmt.Println(findIndexAndSubstr(s, c), m)
	fmt.Println(findIndexAndSubstr(s, sub), m)
}

func findIndexAndSubstr(s string, substr interface{}) (int, string) {
	switch v := substr.(type) {
	case rune:
		index := strings.IndexRune(s, v)
		if index != -1 {
			return index, s[index : index+m]
		}
	case string:
		index := strings.Index(s, v)
		if index != -1 {
			return index, s[index : index+len(v)]
		}
	default:
		fmt.Println("Unsupported type")
	}
	return -1, ""
}
