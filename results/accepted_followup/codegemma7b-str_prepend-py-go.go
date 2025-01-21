package main

import "fmt"

func main() {
	s := "12345678"
	s = "0" + s // by concatenation
	fmt.Println(s)
}
