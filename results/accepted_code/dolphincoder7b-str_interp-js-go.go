package main

import "fmt"

func main() {
	var original = "Mary had a X lamb."
	var little = "little"
	var replaced = original.replace("X", little) // does not change the original string
	fmt.Println(replaced)
}
