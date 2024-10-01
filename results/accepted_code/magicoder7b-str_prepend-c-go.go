package main

import (
	"fmt"
	"strings"
	"syscall"
)

func main() {
	str := "my String"
	cstr := "Changed "
	dup := strings.TrimSpace(str) + "\x00" // to append null character at end of string, for strdup function in Go
	newStr := fmt.Sprintf("%s%s", cstr, dup)
	fmt.Println(newStr)
}
