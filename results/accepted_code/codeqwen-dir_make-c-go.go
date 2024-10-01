package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createDir(dirPath string) error {
	err := os.MkdirAll(dirPath, 0755)
	if err != nil && !os.IsExist(err) {
		return fmt.Errorf("couldn't create directory %s: %w", dirPath, err)
	}
	return nil
}

func main() {
	path := "./path/to/dir"
	if err := createDir(path); err != nil {
		fmt.Printf("Failed to create directories: %v\n", err)
	} else {
		fmt.Printf("Directory created successfully: %s\n", path)
	}
}
