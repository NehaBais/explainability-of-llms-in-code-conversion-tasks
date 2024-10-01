package main

import "fmt"

func main() {
	str := "Good Morning"
	cstr := " to all"
	cstr2 := " !!!"

	if len(str) > len(str)+len(cstr)+len(cstr2) {
		// 1st method
		str += cstr

		// 2nd method
		str = str + cstr2

		fmt.Println(str)
	}
}
