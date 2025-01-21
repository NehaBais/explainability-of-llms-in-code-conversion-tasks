package main

import (
	"fmt"
	"os"
)

func main() {
	// Check the size of input.txt in the current working directory
	fileInfo, err := os.Stat("input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	sizeCurrentDir := fileInfo.Size()
	fmt.Printf("Size of input.txt in current directory: %d bytes\n", sizeCurrentDir)

	// Check the size of input.txt in the root of the file system
	fileInfoRoot, err := os.Stat("/input.txt")
	if err != nil {
		fmt.Println("Error:", err)
		return
	}
	sizeRoot := fileInfoRoot.Size()
	fmt.Printf("Size of /input.txt: %d bytes\n", sizeRoot)
}
