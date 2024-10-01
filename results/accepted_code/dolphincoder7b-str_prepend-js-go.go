package main

import "fmt"

func main() {
	s := ", World"
	s = fmt.Sprintf("Hello%s", s)
	fmt.Println(s)
}
