package main

import "fmt"
import "strings"

func main() {
	var original = "Mary had a X lamb."
	var little = "little"
	var replaced = strings.ReplaceAll(original, "X", little) // changes the original string
	fmt.Println(replaced)
}
