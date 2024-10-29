package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(filename string) {
	info, err := os.Stat(filename)
	if os.IsNotExist(err) {
		fmt.Println(filename, " does not exist")
	} else if info.IsDir() {
		fmt.Println(filename, " is a directory")
	} else {
		fmt.Printf("%s exists with a file size of %d bytes.\n", filename, info.Size())
	}
}

func main() {
	working_dir, _ := os.Getwd() // Get current working dir to use in root

	fileExists(filepath.Join(working_dir, "input.txt"))         // input.txt exists in the CWD
	fileExists(filepath.Join(working_dir, "docs", "input.txt")) // docs/input.txt exists in the CWD

	root := "/" // Here I assume you are using a Unix-based system, where root dir is /
	// On Windows it might be something else (usually C:\, but we're assuming here)

	fileExists(filepath.Join(root, "input.txt"))         // input.txt exists in the FS root
	fileExists(filepath.Join(root, "docs", "input.txt")) // docs/input.txt exists in the FS root
}
