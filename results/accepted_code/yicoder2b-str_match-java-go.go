package main

import (
	"fmt"
)

func startsWith(str string, prefix string) bool {
	return str[0:len(prefix)] == prefix
}

func contains(str string, substr string) bool {
	return strings.Contains(str, substr)
}

func endsWith(str string, suffix string) bool {
	return strings.HasSuffix(str, suffix)
}

func indexOf(str string, substring string, start int) int {
	return strings.Index(str[start:], substring)
}

func main() {
	fmt.Println(startsWith("abcd", "ab")) // prints: true
	fmt.Println(endsWith("abcd", "zn"))   // prints: false
	fmt.Println(contains("abab", "bb"))   // prints: false
	fmt.Println(contains("abab", "ab"))   // prints: true
	start := indexOf("abab", "ab")
	fmt.Printf("%d\n", start)              // prints: 2
	start = indexOf("abab", "ab", start+1) // prints: 3
	fmt.Printf("%d\n", start)              // prints: 2
}
