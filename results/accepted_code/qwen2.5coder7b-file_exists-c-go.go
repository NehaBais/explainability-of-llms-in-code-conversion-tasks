package main

import (
	"fmt"
	"os"
)

// Check if the path is a regular file.
func checkReg(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}
	return !fileInfo.IsDir()
}

// Check if the path is a directory.
func checkDir(path string) bool {
	fileInfo, err := os.Stat(path)
	if err != nil {
		return false
	}
	return fileInfo.IsDir()
}

func main() {
	fmt.Println("input.txt is a regular file?", checkReg("input.txt"))
	fmt.Println("docs is a directory?", checkDir("docs"))
	fmt.Println("/input.txt is a regular file?", checkReg("/input.txt"))
	fmt.Println("/docs is a directory?", checkDir("/docs"))
}
