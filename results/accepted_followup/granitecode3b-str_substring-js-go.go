package main

import (
	"fmt"
	"unicode/utf8"
)

func main() {
	str := "abcdefgh"
	n := 2
	m := 3
	// * starting from n characters in and of m length;
	substr := str[n : n+m]
	fmt.Println(substr) // Output: "cde"
	// * starting from n characters in, up to the end of the string;
	substr = str[n:]
	fmt.Println(substr) // Output: "cdefgh"
	substr = str[:len(str)-1]
	fmt.Println(substr) // Output: "abcdefg"
	// * starting from a known character within the string and of m length;
	index := utf8.RuneCountInString(str)[n].Size() + n - 1
	substr = str[index : index+m]
	fmt.Println(substr) // Output: "bcd"
	// * starting from a known substring within the string and of m length.
	index = utf8.RuneCountInString(str)[utf8.RuneCountInString(str)-3].Size() + 2
	substr = str[index : index+m]
	fmt.Println(substr) // Output: "bcd"
}
