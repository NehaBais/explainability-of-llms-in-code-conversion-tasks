package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"

	newString := replaceAll([]rune(original), []rune(toBeReplaced), []rune(replacement))
	fmt.Println("Original String:", original)
	fmt.Println("Replacement Result:", string(newString))
}

func replaceAll(s, from, to []rune) (replaced []rune) {
	for i := 0; i < len(from); i++ {
		s = strings.Replace(string(s), string(from[i]), string(to[i]), -1)
	}
	return []rune(s)
}
