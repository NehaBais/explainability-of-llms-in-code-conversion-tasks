package main

import (
	"fmt"
)

func main() {
	str := "abcdefgh"

	n := 2
	m := 3

	fmt.Printf("Substring starting from n characters and of m length: %s\n", str[n:n+m])
	fmt.Printf("Substring starting from n characters up to the end of the string: %s\n", str[n:])
	fmt.Printf("Substring of whole string minus last character: %s\n", str[:len(str)-1])
	fmt.Printf("Substring starting from a known character within the string and of m length: %s\n", str[str.Index('b')+n:n+m])
	fmt.Printf("Substring starting from a known substring within the string and of m length: %s\n", str[str.Index('bc')+n:n+m])

}