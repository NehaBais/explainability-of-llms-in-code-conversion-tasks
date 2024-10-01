package main

import (
	"fmt"
)

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := "!!!"
	if len(str)+len(cstr)+len(cstr2) > cap(str) {
		// method 1
		str += cstr

		// method 2
		x := len(str)
		str = str[0:x] + fmt.Sprintf("%s", cstr2)
	}
	fmt.Println(str) // prints "Good Morning to all!!!"
}
