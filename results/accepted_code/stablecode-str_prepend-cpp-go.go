package main

import (
	"fmt"
	"strings"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	var prepended strings.Builder
	for _, str := range myStrings {
		prepended.WriteString(str)
	}
	finalStr := prepended.String()
	fmt.Println(finalStr)
}
