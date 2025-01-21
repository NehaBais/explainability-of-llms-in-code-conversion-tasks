package main

import (
	"fmt"
	"os"
	"path"
)

func getFileSize(filename string) (int64, error) {
	fileInfo, err := os.Stat(filename)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}

func main() {
	// Get the size of input.txt in current working directory
	size, err := getFileSize("input.txt")
	if err != nil {
		fmt.Printf("Failed to get file size: %s\n", err)
	} else {
		fmt.Println(size)
	}

	// Get the size of input.txt in root directory
	absPath := path.Join("/", "input.txt")
	size, err = getFileSize(absPath)
	if err != nil {
		fmt.Printf("Failed to get file size: %s\n", err)
	} else {
		fmt.Println(size)
	}
}
