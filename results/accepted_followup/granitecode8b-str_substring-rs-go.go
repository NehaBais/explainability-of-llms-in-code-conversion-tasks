package main

import "strings"

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3
	// Print 3 characters starting at index 2 (c文字)
	println(string(s[n : n+m]))
	// Print all characters starting at index 2 (c文字化けdef)
	println(string(s[n:]))
	// Print all characters except the last (abc文字化けde)
	println(string(s[len(s)-1 : len(s)-1-m : -1]))
	// Print 3 characters starting with 'b' (bc文)
	cpos := strings.Index(s, "b")
	if cpos != -1 {
		println(string(s[cpos : cpos+m]))
	}
	// Print 3 characters starting with " Ce " (zeugde)
	spos := strings.Index(s, "Ce ")
	if spos != -1 {
		println(string(s[spos : spos+m]))
	}
}
