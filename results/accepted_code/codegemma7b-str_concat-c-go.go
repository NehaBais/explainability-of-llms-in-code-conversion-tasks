package main

import "fmt"

func sconcat(s1, s2 string) string {
	return s1 + s2
}

func main() {
	s := "hello"
	s2 := sconcat(s, " literal")

	fmt.Println(s)
	fmt.Println(s + " literal")
	fmt.Println(s2)
}
