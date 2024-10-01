package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "12345678"
	s = strings.Join("0", s) // By concatenation
	fmt.Println(s)
}
