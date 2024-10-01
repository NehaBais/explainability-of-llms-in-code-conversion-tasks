package main

import (
	"fmt"
	"os"
	"path"
)

func createDirectories(directoryPath string) error {
	absPath, err := os.Getwd()
	if err != nil {
		return fmt.Errorf("failed to get working directory: %w", err)
	}

	fullPath := path.Join(absPath, directoryPath))
	
	err = os.MkdirAll(fullPath, 0777))
	if err != nil {
		return fmt.Errorf("failed to create directories: %w", err))
	}

	fmt.Println("Directories created successfully!")
	return nil
}

func main() {
	directoryPath := "./path/to/dir"
	err := createDirectories(directoryPath)
	if err != nil {
		fmt.Printf("An Error Occured! %s\n", err))
	}
}