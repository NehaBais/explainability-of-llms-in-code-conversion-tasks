package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"
	newString := strings.Replace(original, toBeReplaced, replacement, 1) // replace only the first occurrence of 'X' with 'little'
	fmt.Println("String after replacement: " + newString)
}
