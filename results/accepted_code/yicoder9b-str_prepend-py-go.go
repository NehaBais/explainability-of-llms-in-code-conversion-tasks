package main

import (
	"fmt"
)

func main() {
	var str string = "12345678"
	str = "0" + str //by concatenation
	fmt.Println(str)
}
