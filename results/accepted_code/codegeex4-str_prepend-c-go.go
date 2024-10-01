package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cstr := "Changed "
	newStr := cstr + str
	fmt.Println(newStr)
}
