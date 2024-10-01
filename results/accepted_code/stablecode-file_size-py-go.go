package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func main() {
	// Get size of file in same directory
	dirPath := "./input.txt"
	info, err := os.Stat(dirPath)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	size1 := info.Size()

	// Get size of file in root directory
	rootDir := "/"
	filePath := rootDir + "input.txt"

	info, err = os.Stat(filePath)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	size2 := info.Size()

	// Print the sizes
	fmt.Printf("The size of input.txt in the current directory is %d bytes.\n", int(size1)))
	fmt.Printf("The size of input.txt in the root directory is %d bytes.\n", int(size2))))
}