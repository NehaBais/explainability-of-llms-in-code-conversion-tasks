package main

import (
	"fmt"
	"strings"
)

func main() {
	var original = "Mary had a X lamb"
	var little = "little"

	replaced := fmt.Sprintf("%s", original)
	replaced = strings.Replace(replaced, "X", little, -1) // Replace all occurrences

	fmt.Println("Original string:", original)
	fmt.Println("Replaced string:", replaced)
}
