package main

import (
	"os"
	"path/filepath"
)

func main() {
	// Create an empty file "output.txt" in the current working directory
	createFile("output.txt")

	// Create an empty file "output.txt" in the filesystem root.
	// Note: Writing to the filesystem root may require administrative privileges.
	createFile(filepath.Join("/", "output.txt"))

	// Create a directory "docs" in the current working directory
	createDirectory("docs")

	// Create a directory "docs" in the filesystem root
	createDirectory(filepath.Join("/", "docs"))
}

func createFile(path string) {
	f, err := os.Create(path)
	if err != nil {
		panic(err)
	}
	defer f.Close()
}

func createDirectory(path string) {
	err := os.MkdirAll(path, 0755) // 0755 is the default directory permission
	if err != nil {
		panic(err)
	}
}
