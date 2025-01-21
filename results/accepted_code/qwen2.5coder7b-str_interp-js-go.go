package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"

	replaced := strings.Replace(original, "X", little, -1) // does not change the original string

	fmt.Println(replaced)
}
