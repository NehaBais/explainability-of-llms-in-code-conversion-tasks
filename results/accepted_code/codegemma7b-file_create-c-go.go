package main

import (
	"os"
)

func main() {
	// Create an empty file "output.txt" in the current working directory.
	file, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create an empty directory "docs" in the current working directory.
	err = os.Mkdir("docs", 0750)
	if err != nil {
		panic(err)
	}

	// Create an empty file "output.txt" in the filesystem root.
	file, err = os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create an empty directory "docs" in the filesystem root.
	err = os.Mkdir("/docs", 0750)
	if err != nil {
		panic(err)
	}
}
