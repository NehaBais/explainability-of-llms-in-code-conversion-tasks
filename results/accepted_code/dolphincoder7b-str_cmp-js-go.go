package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(
		strings.EqualFold("abcd", "abcd"),   // true
		strings.EqualFold("abcd", "dcba"),   // false
		strings.Compare("123", "123") == 0,  // true
		strings.Compare("123", "124") < 0,   // true
		strings.Compare("ABCD", "abcd") > 0, // false
		strings.Compare("abcd", "dcba") > 0, // true
	)
}
