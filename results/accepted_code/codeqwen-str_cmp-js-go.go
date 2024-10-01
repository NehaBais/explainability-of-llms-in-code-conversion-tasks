package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(
		"abcd" == "abcd",                    // true
		"abcd" != "abcd",                    // false
		strings.Compare("abcd", "dcba") < 0, // true
		strings.Compare("abcd", "dcba") > 0, // false
		strings.EqualFold("ABCD", "abcd"),   // true (case insensitive)
	)
}
