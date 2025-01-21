package main

import (
	"fmt"
)

func main() {
	var stringVar string = "abc"
	fmt.Println(stringVar)
	stringVar += "def"
	fmt.Println(stringVar)
}
