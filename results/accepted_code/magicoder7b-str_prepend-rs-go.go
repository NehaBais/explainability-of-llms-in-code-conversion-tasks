package main

import (
	"fmt"
	"strings"
)

func main() {
	var s = "World"
	s = strings.Join([]string{"Hello ", s}, "")
	fmt.Println(s)
}
