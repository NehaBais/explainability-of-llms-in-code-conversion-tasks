package main

import (
	"fmt"
)

func main() {
	var str string = "Good Morning"
	cstr := " to All"
	cstr2 := " !!!"

	/* 1st method */
	str += cstr

	/* 2nd method */
	x := len(str)
	str = fmt.Sprintf("%s%s", str[:x], cstr2)

	fmt.Println(str)
}
