package main

import (
	"fmt"
	"strings"
)

func main() {
	greeting := "Hello"
	greeting = strings.Join([]string{greeting, ", world!"}, "")
	fmt.Println(greeting)
}
