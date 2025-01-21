package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println("abcd" == "abcd") //true
	fmt.Println(123 == "123")     //false

	fmt.Println(strings.EqualFold("ABCD", "abcd")) // true (case insensitive)

	//Lexical comparison: Comparing strings lexicographically in Golang uses the <, > operators.
	if "abcd" < "dcba" {
		fmt.Println(true) //true
	} else {
		fmt.Println(false)
	}

	if "abcd" > "dcba" {
		fmt.Println(true)
	} else {
		fmt.Println(false)
	}
}
