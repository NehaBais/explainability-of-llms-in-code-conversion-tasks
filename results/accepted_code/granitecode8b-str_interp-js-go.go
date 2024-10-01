package main

import (
	"fmt"
	"strings"
)

func main() {
	original := "Mary had a X lamb"
	little := "little"
	replaced := strings.Replace(original, "X", little, -1)
	fmt.Println(replaced) // Output: Mary had a little lamb
}
