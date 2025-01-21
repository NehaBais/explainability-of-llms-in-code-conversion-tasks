package main

import (
	"fmt"
)

func main() {
	fmt.Println("abcd" == "abcd", true)   // true
	fmt.Println("abcd" == "abcd", true)   // true
	fmt.Println(123 == "123", true)    // true
	fmt.Println(123 == "123", false)  // false
	fmt.Println("ABCD" == "abcd", false)  // false
	fmt.Println("ABCD" != "abcd", true)   // true
	fmt.Println(123 != "123", false)  // false
	fmt.Println(123 !== "123", true)    // true
	fmt.Println("abcd" < "dcba", true)   // true
	fmt.Println("abcd" > "dcba", false)   // false
	fmt.Println("ABCD".String() == "abcd".String(), true)  // true (case insensitive)
}