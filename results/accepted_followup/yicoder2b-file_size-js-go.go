package main

import (
	"fmt"
	"os"
)

func main() {
	file, err := os.Open("input.txt") // Open file "input.txt" in current directory
	if err != nil {
		fmt.Printf("Failed to open file: %s\n", err)
		return
	} else {
		defer file.Close()
		info := file.Fstat() // Get information about the file
		size := info.Size    // Get size of the file in bytes
		fmt.Printf("The size of input.txt is %d bytes\n", size)
	}

	file, err := os.Open("c:/input.txt") // Open "c:/input.txt" which exists on disk
	if err != nil {
		fmt.Printf("Failed to open file: %s\n", err)
		return
	} else {
		defer file.Close()
		info := file.Fstat() // Get information about the file
		size := info.Size    // Get size of the file in bytes
		fmt.Printf("The size of c:/input.txt is %d bytes\n", size)
	}
}
