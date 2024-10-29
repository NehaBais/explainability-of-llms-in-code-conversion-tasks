package main

import (
	"fmt"
	"os"
)

func getFileSize(filePath string) (int64, error) {
	fileInfo, err := os.Stat(filePath)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}

func main() {
	// Current working directory
	size1, err := getFileSize("input.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt in current directory: %d bytes\n", size1)

	// File system root
	size2, err := getFileSize("/path/to/root/input.txt") // replace with the actual path to root
	if err != nil {
		fmt.Println(err)
		return
	}
	fmt.Printf("Size of input.txt in file system root: %d bytes\n", size2)
}
