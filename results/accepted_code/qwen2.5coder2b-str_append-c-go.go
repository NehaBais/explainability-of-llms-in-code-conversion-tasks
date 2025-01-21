package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	result := fmt.Sprintf("%s%s%s", str, cstr, cstr2)
	fmt.Println(result)
}
