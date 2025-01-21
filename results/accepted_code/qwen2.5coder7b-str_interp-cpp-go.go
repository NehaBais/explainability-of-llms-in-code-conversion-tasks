package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb."
	toBeReplaced := "X"
	replacement := "little"

	newString := replaceString(original, toBeReplaced, replacement)
	fmt.Println("String after replacement:", newString)
}

func replaceString(s string, oldStr string, newStr string) string {
	return strings.Replace(s, oldStr, newStr, -1)
}
