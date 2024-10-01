package main

import (
	"fmt"
	"os"
)

func createDir(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return fmt.Errorf("failed to create directory: %w", err)
	}
	fmt.Println("directory successfully created")
	return nil
}

func main() {
	err := createDir("C:/parent/test")
	if err != nil {
		fmt.Println(err)
	}
}
