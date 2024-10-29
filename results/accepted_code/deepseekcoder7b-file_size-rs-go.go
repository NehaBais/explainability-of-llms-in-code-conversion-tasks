package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	filename1 := "input.txt" // file in current directory
	size, err := getFileSize(filename1)
	if err != nil {
		fmt.Printf("Error getting size of %s: %v\n", filename1, err)
	} else {
		fmt.Printf("Size of %s is %d bytes\n", filename1, size)
	}

	// file in filesystem root directory - you need to provide full path here
	filename2 := "/path/to/input.txt"
	size, err = getFileSize(filename2)
	if err != nil {
		fmt.Printf("Error getting size of %s: %v\n", filename2, err)
	} else {
		fmt.Printf("Size of %s is %d bytes\n", filename2, size)
	}
}

func getFileSize(filename string) (int64, error) {
	var size int64 = -1
	fs, err := os.Stat(filename)
	if err != nil {
		return size, err
	} else {
		size = fs.Size()
	}

	return size, nil
}
