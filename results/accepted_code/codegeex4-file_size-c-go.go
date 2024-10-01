package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	file := "input.txt"
	cwdSize, errCWD := fileSize(filepath.Join(".", file))
	if errCWD != nil {
		fmt.Println(errCWD)
		return
	}

	rootSize, errRoot := fileSize(file)
	if errRoot != nil {
		fmt.Println(errRoot)
		return
	}

	fmt.Printf("Current Working Directory: %d bytes\n", cwdSize)
	fmt.Printf("File System Root: %d bytes\n", rootSize)
}

func fileSize(path string) (int64, error) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}
