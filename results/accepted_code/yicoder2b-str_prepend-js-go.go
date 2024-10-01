package main

import (
	"fmt"
)

func main() {
	var s = "Hello"
	s = "World" + s // prepend string literal 'World' to the original string 'Hello'
	fmt.Println(s)
}
