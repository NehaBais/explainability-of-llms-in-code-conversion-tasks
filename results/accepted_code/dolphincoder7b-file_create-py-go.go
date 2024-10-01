package main

import "os"

func create(directory string) {
	f, err := os.Create(os.path.Join(directory, "output.txt"))
	if err != nil {
		// handle error
	}
	defer f.Close()
	mode := os.FileMode(0755) // default permission bits for new directories
	os.MkdirAll(os.path.Join(directory, "docs"), mode)
}
func main() {
	create(".") // current directory
	create("/") // root directory
}
