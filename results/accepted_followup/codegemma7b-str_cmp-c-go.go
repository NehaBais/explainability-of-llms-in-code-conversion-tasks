package main

import "fmt"

func main() {
	str1 := "hello"
	str2 := "hello"
	if str1 == str2 {
		fmt.Println("Strings are equal")
	}

	str1 := "hello"
	str2 := "world"
	if str1 != str2 {
		fmt.Println("Strings are not equal")
	}

	// ... remaining code
}
