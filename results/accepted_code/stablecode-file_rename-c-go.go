package main

import (
	"io/ioutil"
	"os"
	"path"
)

func rename(src, dest string) {
	// Check if source file exists
	_, err := os.Stat(src)
	if err != nil {
		// Source file does not exist
		return
	}

	// Read the source file into memory
	data, err := ioutil.ReadFile(src)
	if err != nil {
		// Error reading source file
		return
	}

	// Write data to destination file
	err = ioutil.WriteFile(dest, data, 0644)
	if err != nil {
		// Error writing destination file
		return
	}
}

func main() {

	rename("input.txt", "output.txt")
	rename("docs", "mydocs")
	rename("/input.txt", "/output.txt")
	rename("/docs", "/mydocs")
}
