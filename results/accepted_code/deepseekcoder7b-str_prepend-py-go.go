package main

import (
	"fmt"
	"strings"
)

func main() {
	s := "12345678"
	s = strings.Join([]string{"0", s}, "") // by concatenation
	fmt.Println(s)
}
