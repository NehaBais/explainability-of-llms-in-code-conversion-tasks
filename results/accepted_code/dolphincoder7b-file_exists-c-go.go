package main

import (
	"fmt"
	"os"
)

// CheckFile returns true if a file exists at the given path and false otherwise.
func checkFile(path string) bool {
	_, err := os.Stat(path)
	return !os.IsNotExist(err)
}

// CheckDirectory returns true if a directory exists at the given path and false otherwise.
func checkDirectory(path string) bool {
	info, err := os.Stat(path)
	return !os.IsNotExist(err) && info.IsDir()
}

func main() {
	fmt.Printf("input.txt is a regular file? %v\n", checkFile("input.txt"))
	fmt.Printf("docs is a directory? %v\n", checkDirectory("docs"))
	fmt.Printf("/input.txt is a regular file? %v\n", checkFile("/input.txt"))
	fmt.Printf("/docs is a directory? %v\n", checkDirectory("/docs"))
}
