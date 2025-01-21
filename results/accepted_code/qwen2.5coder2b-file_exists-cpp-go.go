package main

import (
	"fmt"
	"os"
)

func fileExists(path string) bool {
	if _, err := os.Stat(path); os.IsNotExist(err) {
		return false
	}
	return true
}

func main() {
	var paths = []string{
		"input.txt",
		"zero_length.txt",
		"docs/input.txt",
		"docs/zero_length.txt",
	}

	for _, path := range paths {
		if fileExists(path) {
			fmt.Println(path, "exists")
			if dir, err := os.Stat(path); err == nil && dir.IsDir() {
				fmt.Println(" is a directory")
			} else if !dir.IsDir() {
				fmt.Printf(" exists with a file size of %d bytes.\n", dir.Size())
			}
		} else {
			fmt.Println(path, "does not exist")
		}
	}
}
