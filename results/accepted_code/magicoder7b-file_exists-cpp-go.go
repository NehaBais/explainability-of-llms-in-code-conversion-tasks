package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(filename string) {
	fmt.Println(filename)

	info, err := os.Stat(filename)
	if os.IsNotExist(err) {
		fmt.Println(" does not exist")
	} else {
		if info.IsDir() {
			fmt.Println(" is a directory")
		} else {
			fmt.Printf(" exists with a file size of %d bytes.\n", info.Size())
		}
	}
}

func main() {
	currentDir, _ := os.Getwd() // Get the current working directory

	// Test in current directory
	fileExists(filepath.Join(currentDir, "input.txt"))
	fileExists(filepath.Join(currentDir, "zero_length.txt"))
	fileExists(filepath.Join(currentDir, "docs/input.txt"))
	fileExists(filepath.Join(currentDir, "docs/zero_length.txt"))

	// Test in filesystem root
	fileExists("/usr/bin/test")
}
