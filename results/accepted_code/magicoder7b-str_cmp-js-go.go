package main

import "strings"

func main() {
	fmt.Println(
		strings.Compare("abcd", "abcd") == 0,                                         // true
		strings.Compare("abcd", "abcd") == 0 && strings.Compare("abcd", "abcd") == 0, // true
		strings.Compare("123", "123") == 0,                                           // true
		strings.Compare("123", "123") != 0,                                           // false
		strings.Compare("ABCD", "abcd") == 0,                                         // false
		strings.Compare("ABCD", "abcd") != 0,                                         // true
		strings.Compare("123", "123") != 0,                                           // false
		strings.Compare("123", "123") != 0,                                           // true
		strings.Compare("abcd", "dcba") > 0,                                          // true
		strings.Compare("abcd", "dcba") < 0,                                          // false
		strings.ToLower(strings.Compare("ABCD", "abcd")) == 0,                        // true (case insensitive)
	)
}
