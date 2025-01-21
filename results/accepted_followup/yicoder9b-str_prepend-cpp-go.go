package main

import (
	"fmt"
	"strings"
)

func main() {
	var myStrings = []string{"prepended to", "my string"} // initialize variables without curly braces
	var prepended = strings.Join(myStrings, "")           // join the strings in slice with nothing in between
	fmt.Println(prepended)                                // print out the joined string
}
