package main

import (
	"fmt"
)

func main() {
	myStrings := []string{"prepended to", "my string"}
	prepended := ""
	for _, str := range myStrings {
		prepended += str + " "
	}
	fmt.Println(prepended)
}
