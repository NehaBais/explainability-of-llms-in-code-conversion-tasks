package main

import (
	"fmt"
)

func main() {
	var stringVar string = "def"
	stringVar = "abc" + stringVar
	fmt.Println(stringVar)
}
