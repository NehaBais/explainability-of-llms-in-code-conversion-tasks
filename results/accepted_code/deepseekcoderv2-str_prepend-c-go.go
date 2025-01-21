package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "my String"
	cstr := "Changed "
	result := strings.Join([]string{cstr, str}, "")
	fmt.Println(result)
}
