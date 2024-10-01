package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := ""
	for _, s := range myStrings {
		prepended += s
	}
	fmt.Println(prepended)
}
