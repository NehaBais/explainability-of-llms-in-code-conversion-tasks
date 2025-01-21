package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func printFileSize(filename string) (int64, error) {
	info, err := os.Stat(filename)
	if err != nil {
		return 0, err
	} else {
		size := info.Size()
		return size, nil
	}
}

func main() {
	fileSize, err := printFileSize("input.txt")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Size of file %s is %d bytes.\n", "input.txt", fileSize)
	}

	fileSize, err = printFileSize(filepath.Abs("/input.txt"))
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Size of file %s is %d bytes.\n", "/input.txt", fileSize)
	}
}
