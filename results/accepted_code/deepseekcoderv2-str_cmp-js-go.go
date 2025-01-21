package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(
		"abcd" == "abcd",                  // true
		"abcd" == "abcd",                  // true
		123 == 123,                        // true
		123 == float64(123),               // false (due to type difference)
		"ABCD" == strings.ToLower("ABCD"), // true (case insensitive)
		"ABCD" != "abcd",                  // true
		123 != 123,                        // false
		123 != float64(123),               // true (due to type difference)
		"abcd" < "dcba",                   // true
		"abcd" > "dcba",                   // false
	)
}
