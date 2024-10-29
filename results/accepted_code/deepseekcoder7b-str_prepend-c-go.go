package main

import (
	"fmt"
)

func main() {
	str := "my String"
	cStr := "Changed "
	newStr := cStr + str //prepends the string variable with another string literal.
	fmt.Println(newStr)
}
