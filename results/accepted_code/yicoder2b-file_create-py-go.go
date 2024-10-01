package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func create(directory string, filename string) {
	_, err := os.Create(filepath.Join(directory, filename))
	if err != nil {
		fmt.Printf("Failed to Create file: %s\n", err)
		return
	}

	os.Mkdir(filepath.Join(directory, "docs"), 0755)
}
func main() {
	create(".", "output.txt") // current directory
	create("/", "output.txt") // root directory
}
