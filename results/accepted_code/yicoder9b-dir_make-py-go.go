package main

import (
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	return os.MkdirAll(filepath.Clean(path), 0750)
}

func main() {
	err := mkdirp("/path/to/directory")
	if err != nil {
		log.Fatal(err) // or handle the error in some other way
	}
	// your code here
}
