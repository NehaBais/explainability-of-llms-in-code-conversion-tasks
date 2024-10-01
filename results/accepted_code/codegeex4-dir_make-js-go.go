package main

import (
	"fmt"
	"os"
)

func mkdirp(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return err
	}
	return nil
}

func main() {
	dirPath := "./path/to/dir"
	err := mkdirp(dirPath)
	if err != nil {
		fmt.Println("Error creating directory:", err)
	} else {
		fmt.Printf("Successfully created directory: %s\n", dirPath)
	}
}
