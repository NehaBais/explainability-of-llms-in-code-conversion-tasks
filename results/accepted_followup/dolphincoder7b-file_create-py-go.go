package main

import "os"
import "path/filepath"

func create(directory string) {
	f, err := os.Create(filepath.Join(directory, "output.txt"))
	if err != nil {
		// handle error
	}
	defer f.Close()
	mode := os.FileMode(0755) // default permission bits for new directories
	os.MkdirAll(filepath.Join(directory, "docs"), mode)
}
func main() {
	create(".") // current directory
	create("/") // root directory
}
