package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	str += cstr
	x := len(str)

	fmt.Println(x) // Using x
	str += cstr2

	fmt.Println(str)
}
