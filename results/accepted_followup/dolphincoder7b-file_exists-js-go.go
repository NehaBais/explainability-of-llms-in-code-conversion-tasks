package main

import (
	"os"
)

func main() {
	// Verify that a file called input.txt and a directory called docs exist.
	// This should be done twice - once for the current working directory,
	// and once for a file and a directory in the filesystem root.

	// Check if an existing file exists
	_, err := os.Stat("input.txt")
	if os.IsNotExist(err) {
		println("File does not exist.")
	} else {
		println("File exists.")
	}

	// Check if a directory exists
	_, err = os.Stat("docs")
	if os.IsNotExist(err) {
		println("Directory does not exist.")
	} else {
		println("Directory exists.")
	}
}
