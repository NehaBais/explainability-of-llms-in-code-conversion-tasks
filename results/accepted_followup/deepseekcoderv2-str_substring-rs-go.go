package main

import (
	"fmt"
)

func main() {
	s := "abc文字化けdef"
	n := 2
	m := 3

	// Print 3 characters starting at index 2 (c文字)
	runes := []rune(s)
	if n < len(runes) && m <= len(runes)-n {
		fmt.Println(string(runes[n : n+m]))
	} else {
		fmt.Println("Index out of range")
	}

	// Print all characters starting at index 2 (c文字化けdef)
	if n < len(runes) {
		fmt.Println(string(runes[n:]))
	} else {
		fmt.Println("Index out of range")
	}

	// Print all characters except the last (abc文字化けde)
	if len(runes) > 1 {
		fmt.Println(string(runes[:len(runes)-1]))
	} else {
		fmt.Println("String too short")
	}

	// Print 3 characters starting with 'b' (bc文)
	cpos := -1
	for i, r := range runes {
		if r == 'b' {
			cpos = i
			break
		}
	}
	if cpos != -1 && m <= len(runes)-cpos {
		fmt.Println(string(runes[cpos : cpos+m]))
	} else {
		fmt.Println("Character not found or index out of range")
	}

	// Print 3 characters starting with "けd" (けde)
	spos := -1
	for i := 0; i <= len(runes)-2; i++ {
		if string(runes[i:i+2]) == "けd" {
			spos = i
			break
		}
	}
	if spos != -1 && m <= len(runes)-spos {
		fmt.Println(string(runes[spos : spos+m]))
	} else {
		fmt.Println("Substring not found or index out of range")
	}
}
