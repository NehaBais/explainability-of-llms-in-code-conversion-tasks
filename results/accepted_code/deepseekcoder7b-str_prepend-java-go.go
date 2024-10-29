package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "def"
	prefix := "abc"
	str = strings.Join([]string{prefix, str}, "")
	fmt.Println(str) // output: abcdef
}
