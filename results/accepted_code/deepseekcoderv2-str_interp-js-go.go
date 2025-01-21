package main

import (
	"fmt"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"
	replaced := replaceInString(original, "X", little)
	fmt.Println(replaced) // Output: Mary had a little lamb
}

func replaceInString(str string, old string, new string) string {
	return str[:findIndex(str, old)] + new + str[len(old)+1:]
}

func findIndex(str string, substr string) int {
	for i := 0; i < len(str); i++ {
		if str[i:i+len(substr)] == substr {
			return i
		}
	}
	return -1
}
