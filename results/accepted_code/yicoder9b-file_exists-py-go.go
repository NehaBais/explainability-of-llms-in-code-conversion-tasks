package main

import (
	"os"
	"path/filepath"
)

func main() {
	// Check existence in current working directory
	exists("input.txt")
	exists("docs")

	// Check existence at the root of your filesystem
	exists("/input.txt")
	exists("/docs")
}

func exists(path string) {
	_, err := os.Stat(filepath.Clean(path))
	if err == nil {
		println(path + " exists")
	} else if os.IsNotExist(err) {
		println(path + " does not exist")
	} else {
		println("error: " + err.Error())
	}
}
