package main

import "fmt"

func main() {
	fmt.Println(
		"abcd" == "abcd", // true
		"abcd" == "abcd", // true
		123 == "123",     // true
		123 == "123",     // false
		"ABCD" == "abcd", // false
		"ABCD" != "abcd", // true
		123 != "123",     // false
		123 != "123",     // true
		"abcd" < "dcba",  // true
		"abcd" > "dcba",  // false
		strings.ToLower("ABCD") == strings.ToLower("abcd"), // true (case insensitive)
	)
}
