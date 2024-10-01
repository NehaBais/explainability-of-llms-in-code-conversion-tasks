package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"
	newString := strings.Replace(original, toBeReplaced, replacement, -1)
	fmt.Printf("String after replacement: %s\n", newString)
}
