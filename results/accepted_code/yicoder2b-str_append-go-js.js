package main

import (
	"fmt"
	"strings"
)

func main() {
	var s strings.Builder
	s.WriteString("foo")
	s.WriteString("bar")
	fmt.Println(s.String())
}