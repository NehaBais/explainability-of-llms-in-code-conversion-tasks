package main

import "fmt"

func main() {
	var original = "Mary had a X lamb"
	var little = "little"

	// Using fmt.Sprintf to replace the placeholder with the value of little
	replaced := fmt.Sprintf("%s", original)
	replaced = strings.Replace(replaced, "X", little, -1) // Replace all occurrences

	fmt.Println("Original string:", original)
	fmt.Println("Replaced string:", replaced)
}
