package main

import "fmt"

func main() {
	s := "123456678"
	s = "0" + s // by concatenation
	fmt.Println(s)
}
