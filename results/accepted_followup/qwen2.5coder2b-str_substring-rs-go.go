package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "abc文字化けdef"

	n := 2
	m := 3

	fmt.Println(strings.Join([]rune(s[n:n+m]), ""))

	fmt.Println(strings.Join([]rune(s[n:]), ""))

	fmt.Print(strings.Reverse([]rune(s[:]))[n:]
	fmt.Println()

	cpos := strings.IndexFunc(s, func(r rune) bool { return r == 'b' })
	if cpos != -1 {
		fmt.Println(strings.Join([]rune(s[cpos:cpos+m]), ""))
	}

	spos := strings.IndexFunc(s, func(r rune) bool { return string(r) == "けd" })
	if spos != -1 {
		fmt.Println(strings.Join([]rune(s[spos:spos+m]), ""))
	}
}