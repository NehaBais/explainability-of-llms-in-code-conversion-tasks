package main

import (
	"os"
	"path" // Import path package
)

func create(directory string) {
	os.Create(path.Join(directory, "output.txt"))
	os.Mkdir(path.Join(directory, "docs"), 0755)
}

func main() {
	create(".") // current directory
	create("/") // root directory
}
