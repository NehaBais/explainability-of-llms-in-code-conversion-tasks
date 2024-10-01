package main

import "fmt"

func main() {
	var stringVar = "def"
	stringVar = "abc" + stringVar
	fmt.Println(stringVar)
}
