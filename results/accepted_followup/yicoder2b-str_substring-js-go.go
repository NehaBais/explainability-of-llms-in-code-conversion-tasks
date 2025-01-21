package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "abcdefgh"
	n := 2
	m := 3
	s, _ := strings.Split(str[n-1:(n+m)], "")
	fmt.Println(s) // => "cde"
	s, _ := strings.Split(str[(n):], "")
	fmt.Println(s) // => "cdefgh"
	s, _ := strings.Split(str[:len(str)-1], "")
	fmt.Println(s) // => "abcdefg"
	s, _ := strings.Split(str[(strings.Index(str, "b")):(strings.Index(str, "b")+m)], "")
	fmt.Println(s) // => "bc"
	s, _ := strings.Split(str[(strings.Index(str, "bc")):(strings.Index(str, "bc")+m)], "")
	fmt.Println(s) // => "bcd"
}
