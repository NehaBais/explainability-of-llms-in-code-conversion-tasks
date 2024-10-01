package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index 2 (c文字)
	fmt.Println(string(s[n : n+m]))

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(s[n:])

	// Print all characters except the last (abcletterskede)
	fmt.Println(strings.TrimRight(s, string(s[len(s)-1])))

	// Print 3 characters starting with 'b' (bc文)
	pos := strings.IndexByte(s, 'b')
	fmt.Println(string(s[pos : pos+m]))

	// Print 3 characters starting with "けd" (けde)
	spos := strings.Index(s, "けd")
	fmt.Println(string(s[spos : spos+m]))
}
