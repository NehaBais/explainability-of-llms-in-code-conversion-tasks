package main

import (
	"os"
	"syscall/js"
)

func main() {
	// Verify that a file called input.txt and a directory called docs exist.
	// This should be done twice - once for the current working directory,
	// and once for a file and a directory in the filesystem root.

	// Check if an existing file exists
	_, err := os.Stat("input.txt")
	if os.IsNotExist(err) {
		js.Global().Call("alert", "File does not exist.")
	} else {
		js.Global().Call("alert", "File exists.")
	}

	// Check if a directory exists
	_, err = os.Stat("docs")
	if os.IsNotExist(err) {
		js.Global().Call("alert", "Directory does not exist.")
	} else {
		js.Global().Call("alert", "Directory exists.")
	}
}
