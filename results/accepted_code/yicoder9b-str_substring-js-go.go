package main

import (
	"fmt"
	"unicode"
)

func substring(str string, n int, m int) string {
	var result string
	for i := 0; i < n+m && i < len(str); i++ {
		if i >= n {
			result += string(str[i])
		}
	}
	return result
}

func wholeStringMinusLastChar(str string) string {
	var result string
	for i := 0; i < len(str)-1; i++ {
		result += string(str[i])
	}
	return result
}

func startingFromKnownCharacterAndLength(str string, character string, m int) string {
	var result string
	indexOf := func(a, b string) int {
		for i := 0; i < len(a); i++ {
			if a[i] == b[0] {
				return i
			}
		}
		return -1
	}

	index := indexOf(str, character)
	result = substring(str, index, m)
	return result
}

func startingFromKnownSubstringAndLength(str string, substr string, m int) string {
	var result string
	indexOfFunc := func(a, b string) int {
		for i := 0; i < len(a); i++ {
			if a[i:i+len(b)] == b {
				return i
			}
		}
		return -1
	}

	index := indexOfFunc(str, substr)
	result = substring(str, index, m)
	return result
}

func main() {
	var str string = "abcdefgh"
	n := 2
	m := 3
	fmt.Println(substring(str, n, m))                              // => "cde"
	fmt.Println(startingFromKnownCharacterAndLength(str, "b", m))  // => "bcd"
	fmt.Println(startingFromKnownSubstringAndLength(str, "bc", m)) // => "bcd"
	fmt.Println(wholeStringMinusLastChar(str))                     // => "abcdefg"
}
