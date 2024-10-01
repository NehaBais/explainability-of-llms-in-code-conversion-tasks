package main

import (
	"strings"
)

func main() {
	str := "abcdefgh"
	n := 2
	m := 3

	//  * starting from n characters in and of m length;
	s, _ := strings.Split(str[n-1:(n+m)], "")
	fmt.Println(s)

	//  * starting from n characters in, up to the end of the string;
	s, _ := strings.Split(str[(n):], "")
	fmt.Println(s)

	//  * whole string minus last character;
	s, _ := strings.Split(str[:len(str)-1], "")
	fmt.Println(s)

	//  * starting from a known character within the string and of m length;
	s, _ := strings.Split(str[(strings.Index(str, "b")):(strings.Index(str, "b")+m)], "")
	fmt.Println(s)

	//  * starting from a known substring within the string and of m length.
	s, _ := strings.Split(str[(strings.Index(str, "bc")):(strings.Index(str, "bc")+m)], "")
	fmt.Println(s)
}
