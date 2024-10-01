package main

import (
	"os"
)

func main() {
	// Rename file from current working directory
	err := os.Rename("input.txt", "output.txt")
	if err != nil {
		panic(err) // panic if error occurs
	}

	// Rename directory from current working directory
	err = os.Rename("docs", "mydocs")
	if err != nil {
		panic(err) // panic if error occurs
	}

	// Root filesystem case
	err = os.Rename("/input.txt", "/output.txt")
	if err != nil {
		panic(err) // panic if error occurs
	}

	// Rename directory from root filesystem
	err = os.Rename("/docs", "/mydocs")
	if err != nil {
		panic(err) // panic if error occurs
	}
}
