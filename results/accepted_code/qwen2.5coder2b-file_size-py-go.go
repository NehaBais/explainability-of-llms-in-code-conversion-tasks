package main

import (
	"fmt"
	"os"
)

func main() {
	size, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Printf("Size of input.txt in bytes: %d\n", size.Size())

	// Size of file in the root directory
	rootSize, err := os.Stat("/")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Printf("Size of root directory in bytes: %d\n", rootSize.Size())
}
