package main

import (
	"fmt"
)

func main() {
	var s = "hello"
	fmt.Println(s + " literal")
	var s2 = s + " literal"
	fmt.Println(s2)
}
