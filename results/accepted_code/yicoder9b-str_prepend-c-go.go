package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	prependStr := "Changed "
	newString := prependStr + str
	fmt.Println(newString)
}
