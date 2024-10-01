package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	// failure when space allocated to str is insufficient.
	if len(str)+len(cstr)+len(cstr2) <= cap(str) {
		/* 1st method */
		newStr := strings.Join([]string{str, cstr}, "")

		/* 2nd method */
		newStr = fmt.Sprintf("%s%s", str, cstr2)

		fmt.Println(newStr)
	}
}
