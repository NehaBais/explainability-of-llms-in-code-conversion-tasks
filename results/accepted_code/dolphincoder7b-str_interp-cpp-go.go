package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"

	fmt.Println(original)

	// Find and replace 'X' in the original string
	newString = strings.ReplaceAll(original, toBeReplaced, replacement)

	fmt.Printf("New String after replacement: %s \n", newString)
}
