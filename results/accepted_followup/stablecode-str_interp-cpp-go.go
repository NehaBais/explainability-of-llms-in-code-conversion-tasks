package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"

	newString := original
	index := -1
	for {
		if strings.Contains(newString, toBeReplaced) {
			index = strings.Index(newString, toBeReplaced))
			break
		}
		toBeReplaced = replacement
	}

	newString = newString[:index+len(toBeReplaced)] + replacement + newString[index+len(toBeReplaced):]]
	
	fmt.Printf("String after replacement: %s\n", newString))
}