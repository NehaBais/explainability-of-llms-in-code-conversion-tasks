package main

import (
	"fmt"
)

func main() {

	// String 1 and 2
	str1 := "abcd"
	str2 := "ab"

	// First, we check if the first string starts with the second string.
	startWith := str1.StartsWith(str2)

	fmt.Println("Does", str1, "start with", str2, "? ", startWith)

	// Next, we check if the first string contains the second string at any location.
	contains := strings.Contains(str1, str2)

	fmt.Println("Does", str1, "contain", str2, "? ", contains)

	// Finally, we check if the first string ends with the second string.
	endsWith := strings.HasSuffix(str1, str2)

	fmt.Println("Does", str1, "end with", str2, "? ", endsWith)
}
