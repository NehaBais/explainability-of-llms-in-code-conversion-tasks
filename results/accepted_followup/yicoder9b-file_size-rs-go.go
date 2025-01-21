package main

import (
	"fmt"
	"os"
)

func main() {
	fileInfo, err := os.Stat("input.txt")
	if err != nil {
		panic(err)
	}
	fmt.Printf("Size of input.txt is %d bytes\n", fileInfo.Size())

	// For another one in the file system root:
	filePath := "/" // or whatever your root directory path is
	fileInfoRoot, err := os.Stat(filePath)
	if err != nil {
		panic(err)
	}
	fmt.Printf("Size of %s is %d bytes\n", filePath, fileInfoRoot.Size())
}
