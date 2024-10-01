package main

import (
	"os"
)

func main() {
	// Rename "input.txt" to "output.txt" in the current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		panic(err)
	}

	// Rename "docs" to "mydocs" in the current working directory
	err = os.Rename("docs", "mydocs")
	if err != nil {
		panic(err)
	}

	// Rename "/input.txt" to "/output.txt" in the filesystem root
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		panic(err)
	}

	// Rename "/docs" to "/mydocs" in the filesystem root
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		panic(err)
	}
}
