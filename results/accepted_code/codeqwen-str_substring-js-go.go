package main

import (
	"fmt"
	"strings"
)

func Substring(input string, start int, end ...int) string {
	l := len(input)
	if len(end) == 0 {
		return input[start:]
	} else if end[0] < 0 {
		return input[:l+end[0]]
	} else {
		return input[start:min(end[0], l)]
	}
}

func min(a, B int) int {
	if A <= B {
		return A
	} else {
		return B
	}
}

func main() {
	str := "abcdefgh"
	n := 2
	m := 3

	//  * starting from n characters in and of m length;
	fmt.Println(Substring(str, n, n+m)) // => "cde"

	//  * starting from n characters in, up to the end of the string;
	fmt.Println(Substring(str, n)) // => "cdefgh"

	//  * whole string minus last character;
	fmt.Println(Substring(str, 0, len(str)-1)) // => "abcdefg"

	//  * starting from a known character within the string and of m length;
	idx := strings.Index(str, "b")
	if idx != -1 {
		fmt.Println(Substring(str, idx, idx+m)) // => "bcd"
	}

	//  * starting from a known substring within the string and of m length;
	idx = strings.Index(str, "bc")
	if idx != -1 {
		fmt.Println(Substring(str, idx, idx+m)) // => "bcd"
	}
}
