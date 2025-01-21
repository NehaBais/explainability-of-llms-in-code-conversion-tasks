package main

import (
	"fmt"
	"os"
)

func renameFile(path, newPath string) error {
	err := os.Rename(path, newPath)
	if err != nil {
		return fmt.Errorf("failed to rename file: %w", err)
	}
	return nil
}

func renameDirectory(path, newPath string) error {
	err := os.Rename(path, newPath)
	if err != nil {
		return fmt.Errorf("failed to rename directory: %w", err)
	}
	return nil
}

func main() {
	// Current working directory
	err := renameFile("./input.txt", "./output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	err = renameDirectory("./docs", "./mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}

	// Filesystem root
	err = renameFile("/input.txt", "/output.txt")
	if err != nil {
		fmt.Println(err)
		return
	}
	err = renameDirectory("/docs", "/mydocs")
	if err != nil {
		fmt.Println(err)
		return
	}
}
