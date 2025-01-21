package main

import (
	"fmt"
	"strings"
)

func main() {
	var str string = "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	if len(str)+len(cstr)+len(cstr2) < 1024 {
		str += cstr + cstr2
	}
	fmt.Println(strings.TrimSpace(str))
}
