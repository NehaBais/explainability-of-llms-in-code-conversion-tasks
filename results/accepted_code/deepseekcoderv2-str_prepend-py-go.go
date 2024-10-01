package main

import "fmt"

func main() {
	s := "12345678"
	// Append a 0 before s using string concatenation
	s = "0" + s
	fmt.Println(s)
}
