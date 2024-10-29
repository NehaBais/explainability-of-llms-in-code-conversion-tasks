package main

import (
	"fmt"
)

func main() {
	var str string = "12345678" // create a string variable equal to any text value
	str += "9!"                 // append the string variable with another string literal
	fmt.Println(str)            // show the contents of the variable after the append operation
}
