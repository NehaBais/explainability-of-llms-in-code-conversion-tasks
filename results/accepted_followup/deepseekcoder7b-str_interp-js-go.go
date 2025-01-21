package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "big"
	replaced := strings.Replace(original, "X", little, -1) //replace all instances of X in original string with big

	fmt.Printf("Original: %s\nReplaced: %s\n", original, replaced)
}
