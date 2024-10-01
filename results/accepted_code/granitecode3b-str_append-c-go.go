package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	// Failure when space allocated to str is insufficient.
	if len(str) < len(str)+len(cstr)+len(cstr2) {
		// 1st method
		str += cstr
		// 2nd method
		x := strings.LastIndex(str, " ") + 1
		str = str[:x] + cstr2 + str[x:]
	}

	fmt.Println(str)
}
