package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := strings.Repeat(cstr, 1) + str

	fmt.Println(strings.TrimSpace(dup))))
}