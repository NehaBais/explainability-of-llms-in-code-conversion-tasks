package main

import (
	"fmt"
	"os"
)

func main() {
	// Check size of input.txt in the current working directory
	fileInfo, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of input.txt in current directory: %d bytes\n", fileInfo.Size())

	// Check size of c:/input.txt (assuming the path is correct for your system)
	fileInfoRoot, err := os.Stat("c:/input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	fmt.Printf("Size of c:/input.txt: %d bytes\n", fileInfoRoot.Size())
}
