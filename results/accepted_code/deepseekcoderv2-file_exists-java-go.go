package main

import (
	"fmt"
	"os"
)

func checkFileExists(filename string) bool {
	_, err := os.Stat(filename)
	return !os.IsNotExist(err)
}

func main() {
	// Check in the current working directory
	currentDirFile := "input.txt"
	fmt.Printf("Checking if %s exists in the current directory: %v\n", currentDirFile, checkFileExists(currentDirFile))

	// Check in the filesystem root (assuming /docs)
	rootDirFile := "/docs/input.txt"
	fmt.Printf("Checking if %s exists in the filesystem root: %v\n", rootDirFile, checkFileExists(rootDirFile))
}
