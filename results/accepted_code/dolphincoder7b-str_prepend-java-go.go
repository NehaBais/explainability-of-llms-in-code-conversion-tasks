package main

import "fmt"

func main() {
	str := "abc"
	fmt.Println(str)                                     // Output: abc
	fmt.Printf("The length of string is %d\n", len(str)) // Output: The length of string is 3

	str = "def" + str
	fmt.Println(str) // Output: defabc
}
