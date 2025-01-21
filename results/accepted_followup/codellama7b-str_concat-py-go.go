package main

import (
	"fmt"
	"strings"
)

func main() {

	var s1 string = "hello"
	var s2 string = s1 + " world"

	fmt.Println(s1 + " world")
	fmt.Println(s2)

	fmt.Println(", ".join([]string{s1, "world", "mom"}))
}
