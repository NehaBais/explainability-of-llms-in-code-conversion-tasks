package main

import (
	"os"
)

func fileExists(path string) bool {
	_, err := os.Stat(path)
	if err == nil {
		return true
	}
	if os.IsNotExist(err) {
		return false
	}
	return false
}

func main() {
	println(fileExists("input.txt"))    // Check for file in current working directory.
	println(fileExists("c:/input.txt")) // Check for file at root filesystem.

	println(fileExists("docs"))    //Check for folder in current working directory.
	println(fileExists("c:/docs")) // Check for folder at root filesystem.
}
