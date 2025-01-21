package main

import (
	"fmt"
	"os"
)

func createPath(path string) error {
	err := os.MkdirAll(path, 0755)
	if err != nil {
		return fmt.Errorf("failed to create directory: %w", err)
	}

	fmt.Println("path successfully created")
	return nil
}

func main() {
	path := "./parent/test"
	if err := createPath(path); err != nil {
		fmt.Println(err)
	}
}
