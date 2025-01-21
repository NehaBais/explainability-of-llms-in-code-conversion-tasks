package main

import (
	"log"
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	return os.MkdirAll(filepath.Clean(path), 0750)
}

func main() {
	err := mkdirp("/path/to/directory")
	if err != nil {
		log.Fatal(err) // handle the error in a way that fits your program's needs
	}
	// your code here
}
