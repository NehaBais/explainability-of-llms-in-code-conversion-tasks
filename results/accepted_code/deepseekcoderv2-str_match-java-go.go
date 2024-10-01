package main

import (
	"fmt"
	"regexp"
)

func startsWith(s, ss string) bool {
	return s[0:len(ss)] == ss
}

func endsWith(s, ss string) bool {
	return s[len(s)-len(ss):] == ss
}

func contains(s, ss string) bool {
	reg := regexp.MustCompile(ss)
	return reg.MatchString(s)
}

func main() {
	fmt.Println("abcd".startsWith("ab")) //returns true
	fmt.Println("abcd".endsWith("zn"))   //returns false
	fmt.Println("abab".contains("bb"))   //returns false
	fmt.Println("abab".contains("ab"))   //returns true
	reg := regexp.MustCompile("ab")
	indexs := reg.FindStringIndex("abab")
	fmt.Println(indexs)
}
