package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	fi, err := os.Stat(path)
	if err != nil {
		return false
	}

	if fi.IsDir() {
		fmt.Println("is a directory")
	} else {
		fmt.Printf("exists with a file size of %d bytes.", fi.Size())
	}
	return true
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("/docs/input.txt")
	fileExists("/docs/zero_length.txt")
}
