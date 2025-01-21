package main

import (
	"fmt"
)

func main() {
	fmt.Println("abcd".String().Equal("abcd"), true)   // true
	fmt.Println("abcd".String().Equal("abcd"), true)   // true
	fmt.Println(123 == "123", true)    // true
	fmt.Println(123 == "123", false)  // false
	fmt.Println("ABCD" == "abcd", false)  // false
	fmt.Println("ABCD" != "abcd", true)   // true
	fmt.Println(123 != "123", false)  // false
	fmt.Println(123 !== "123", true)    // true
	fmt.Println("abcd".String().Less("dcba"), true)   // true
	fmt.Println("abcd".String().Greater("dcba"), false)   // false
	fmt.Println("ABCD".String().Equal("abcd"), true)  // true (case insensitive)
}