package main

import (
	"fmt"
	"strings"
)

func main() {
	// Demonstrate comparing two strings
	str1, str2 := "abcd", "dcba"
	fmt.Println(str1 == str2, str1 != str2, str1 < str2, str1 > str2, strings.ToLower(str1) == strings.ToLower(str2))

	// Demonstrate case insensitive comparison
	str3, str4 := "ABCD", "abcd"
	fmt.Println(strings.ToLower(str3) == strings.ToLower(str4))
}
