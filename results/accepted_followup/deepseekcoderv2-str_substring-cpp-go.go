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

	index_c, substr_c := findIndexAndSubstr(s, c)
	if index_c != -1 {
		fmt.Println(substr_c[:m])
	} else {
		fmt.Println("")
	}

	index_sub, substr_sub := findIndexAndSubstr(s, sub)
	if index_sub != -1 {
		fmt.Println(substr_sub[:m])
	} else {
		fmt.Println("")
	}
}

func findIndexAndSubstr(s string, substr interface{}) (int, string) {
	switch v := substr.(type) {
	case rune:
		index := strings.IndexRune(s, v)
		if index != -1 {
			return index, s[index:]
		}
	case string:
		index := strings.Index(s, v)
		if index != -1 {
			return index, s[index:]
		}
	default:
		fmt.Println("Unsupported type")
	}
	return -1, ""
}
