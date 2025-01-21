package main

import (
	"os"
)

func main() {
	// Rename in the current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		panic(err)
	}
	err = os.Rename("docs", "mydocs")
	if err != nil {
		panic(err)
	}

	// Rename in the filesystem root
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		panic(err)
	}
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		panic(err)
	}
}
