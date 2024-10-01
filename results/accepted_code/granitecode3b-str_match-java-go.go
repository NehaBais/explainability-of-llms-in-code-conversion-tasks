package main

import (
	"fmt"
	"strings"
)

func main() {
	fmt.Println("Determining if the first string starts with second string:")
	fmt.Println("abcd".StartsWith("ab")) //returns true
	fmt.Println("abcd".EndsWith("zn"))   //returns false
	fmt.Println("abab".Contains("bb"))   //returns false
	fmt.Println("abab".Contains("ab"))   //returns true
	loc := "abab".IndexOf("bb")          //returns -1
	fmt.Println(loc)                     //returns 0
	loc = "abab".IndexOf("ab", loc+1)    //returns 2
	fmt.Println(loc)                     //returns 2
}
func (s string) StartsWith(substring string) bool {
	return strings.HasPrefix(s, substring)
}
func (s string) EndsWith(substring string) bool {
	return strings.HasSuffix(s, substring)
}
func (s string) Contains(substring string) bool {
	return strings.Contains(s, substring)
}
func (s string) IndexOf(substring string, start int) int {
	return strings.Index(s, substring, start)
}
