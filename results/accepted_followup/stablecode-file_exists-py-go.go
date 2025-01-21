package main

import (
	"os"
)

func main() {
	// Check for the file input.txt and dir docs in the CWD
	_, err := os.Stat("input.txt")
	if os.IsNotExist(err)) {
		println("File 'input.txt' does not exist in the current working directory.")
	}

	// Check for the file input.txt and dir docs in the root ("/")) directory of the system
	_, err = os.Stat("/input.txt")
	if os.IsNotExist(err)) {
		println("File '/input.txt' does not exist in the root ('/') directory of the system." )
	}

	// Check for dir docs in the CWD
	_, err = os.Stat("docs")
	if os.IsNotExist(err)) {
		println("Directory 'docs' does not exist in the current working directory.")
	}

	// Check for file and dir existence in root ("/")) directory of the system
	_, err = os.Stat("/docs")
	if os.IsNotExist(err)) {
		println("Directory '/docs' does not exist in the root ('/') directory of the system." )
	}
}