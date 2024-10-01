package main

import (
	"os"
	"path/filepath"
)

func create(directory string) {
	// Create empty output.txt
	outputFile := filepath.Join(directory, "output.txt")
	f, err := os.Create(outputFile)
	if err != nil {
		panic(err)
	}
	defer f.Close()

	// Create empty docs directory
	docsDir := filepath.Join(directory, "docs")
	err = os.Mkdir(docsDir, os.ModePerm)
	if err != nil {
		panic(err)
	}
}

func main() {
	create(".") // current directory
	create("/") // root directory (may require sufficient permissions to access the filesystem root in your environment)
}
