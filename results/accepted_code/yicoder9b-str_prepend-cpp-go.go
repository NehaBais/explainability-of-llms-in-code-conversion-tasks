package main

import (
	"fmt"
	"strings"
)

func main() {
	var myStrings []string = {"prepended to", "my string"}
	var prepended string = strings.Join(myStrings, "")
	fmt.Println(prepended)
}