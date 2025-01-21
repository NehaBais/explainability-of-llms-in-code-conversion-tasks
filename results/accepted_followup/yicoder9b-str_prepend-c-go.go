package main

import (
	"fmt"
)

func main() {
	str := "my String"
	prependStr := "Changed "
	newString := prependStr + str
	fmt.Println(newString)
}
