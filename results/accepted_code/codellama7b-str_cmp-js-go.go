package main

import "fmt"

func main() {
	s1 := "abcd"
	s2 := "dcba"

	fmt.Println(s1 == s2) // true
	fmt.Println(s1 != s2) // false
	fmt.Println(s1 < s2)  // true
	fmt.Println(s1 > s2)  // false
}
