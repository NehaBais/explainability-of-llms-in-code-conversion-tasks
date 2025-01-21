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
	fmt.Println(strings.Join(s[n:n+m], ""))

	// Print all characters starting at index 2 (c文字化けdef)
	fmt.Println(strings.Join(s[n:], ""))

	// Print all characters except the last (abc文字化けde)
	reversed := strings.Reverse(s[:])
	fmt.Print(reversed[n:])
	fmt.Println()

	// Print 3 characters starting with 'b' (bc文)
	cpos := strings.IndexFunc(s, func(r rune) bool { return r == 'b' })
	if cpos != -1 {
		fmt.Println(strings.Join(s[cpos:cpos+m], ""))
	}

	// Print 3 characters starting with "けd" (けde)
	spos := strings.IndexFunc(s, func(r rune) bool { return string(r) == "けd" })
	if spos != -1 {
		fmt.Println(strings.Join(s[spos:spos+m], ""))
	}
}
