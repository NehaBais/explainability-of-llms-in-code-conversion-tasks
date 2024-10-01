package main

import (
	"fmt"
)

func main() {
	hello := "Hello world"
	println(appendString(hello, "!!!!"))
}

func appendString(s string, suffix string) string {
	return s + suffix
}
