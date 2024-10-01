package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println(
		"abcd" == "abcd",                  // true
		"abcd" == strings.ToLower("ABCD"), // true
		123 == 123,                        // true
		123 != float64(123),               // true
		string([]byte{0x61, 0x62, 0x63, 0x64}) < string([]byte{0x64, 0x63, 0x62, 0x61}),  // true (lexically ordered)
		"ABCD" != strings.ToLower("abcd"),                                                // false
		"ABCD" > "abcd",                                                                  // true
		strings.Compare("abc", "bcd") < 0 && strings.Compare("abc", "abc") == 0,          // true
		string([]byte{0x61, 0x62, 0x63, 0x64}) != string([]byte{0x64, 0x63, 0x62, 0x61}), // false (not equal value)
		"ABCD".ToLower() == strings.ToLower("abcd"),                                      // true
		"ABCD" > "abc", // false (lexically ordered after)
		string([]byte{0x61, 0x62, 0x63, 0x64}) != string([]byte{0x64, 0x63, 0x62, 0x61}), // false (not equal type)
		"ABCD" < "abcd", // true (lexically ordered before)
		"ABCD".ToLower() == strings.ToLower("abcd"), // true
		"ABCD" > "abc", // false (lexically ordered after)
		string([]byte{0x61, 0x62, 0x63, 0x64}) != string([]byte{0x64, 0x63, 0x62, 0x61}), // false (not equal type)
		"ABCD".ToLower() == strings.ToLower("abcd"),                                      // true
		"ABCD" < "abc", // true (lexically ordered before)
		string([]byte{0x61, 0x62, 0x63, 0x64}) != string([]byte{0x64, 0x63, 0x62, 0x61}), // false (not equal type)
		"ABCD".ToLower() == strings.ToLower("abcd"),                                      // true
	)
}
