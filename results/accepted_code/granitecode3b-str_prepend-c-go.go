package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := strings.Dup(str)
	fmt.Println(strings.Join([]string{cstr, dup}, ""))
}
