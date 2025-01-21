package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "abcdefgh"
	n := 2
	m := 3
	fmt.Println(str[n : n+m])     // => "cde"
	fmt.Println(str[n:])          // => "cdefgh"
	fmt.Println(str[:len(str)-1]) // => "abcdefg"
	idx := strings.Index(str, "b")
	fmt.Println(str[idx : idx+m]) // => "bcd"
	idx = strings.Index(str, "bc")
	fmt.Println(str[idx : idx+m]) // => "bcd"
}
