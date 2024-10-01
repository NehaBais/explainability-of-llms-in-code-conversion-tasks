package main

import (
	"fmt"
)

func main() {
	str := "Good Morning" // Go strings are immutable, so we use := instead of =
	cstr := " to all"
	cstr2 := " !!!!"
	x := len(str) + len(cstr) + len(cstr2)
	if x <= len(str) {
		// 1st method
		str += cstr
		fmt.Println(str)
		// 2nd method
		str = str[:x] + cstr2
		fmt.Println(str)
	}
}
