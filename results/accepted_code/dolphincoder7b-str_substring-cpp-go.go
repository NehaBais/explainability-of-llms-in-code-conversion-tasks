package main

import (
	"fmt"
)

func main() {
	s := "0123456789"

	const n int = 3
	const m int = 4
	c := '2'
	sub := "456"

	fmt.Println(s[n:m])
	fmt.Println(s[n:])
	fmt.Println(s[:len(s)-1])
	fmt.Println(s[n:int(c)])
	fmt.Println(s[n : int(c)+m])
}
