package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func fileExists(path string) {
	fmt.Println(path)
	info, err := os.Stat(path)
	if os.IsNotExist(err) {
		fmt.Printf("%s does not exist\n", path)
		return
	}

	if err != nil {
		panic(err)
	}

	if info.IsDir() {
		fmt.Println(path, "is a directory")
	} else {
		fmt.Printf("%s exists with a file size of %d bytes\n", path, info.Size())
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("docs/input.txt")
	fileExists("docs/zero_length.txt")

	// For the root of the filesystem, we use filepath.Join to ensure correct path separators
	fileExists(filepath.Join("/", "input.txt"))
	fileExists(filepath.Join("/", "docs"))
}
