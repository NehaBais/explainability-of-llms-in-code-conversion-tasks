package main

import (
	"fmt"
	"os"
)

func main() {
	// Get size of file in current working directory
	file, err := os.Stat("input.txt")
	if err != nil {
		panic(err) // or handle the error appropriately
	}
	fmt.Printf("Size of input.txt: %d\n", file.Size())

	// Get size of file in root directory
	file, err = os.Stat("/input.txt")
	if err != nil {
		panic(err) // or handle the error appropriately
	}
	fmt.Printf("Size of /input.txt: %d\n", file.Size())
}
