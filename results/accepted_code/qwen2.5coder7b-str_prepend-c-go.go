package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cstr := "Changed "
	str = cstr + str
	fmt.Println(str)
}
