package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string = "12345678"
	s = strings.Join([]string{s, "9!"}, "")
	fmt.Println(s)
}
