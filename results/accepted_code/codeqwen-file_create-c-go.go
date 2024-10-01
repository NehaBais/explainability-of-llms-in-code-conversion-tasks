package main

import (
	"os"
)

func main() {
	// Create an empty file "output.txt" in the current working directory
	fd, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	defer fd.Close()

	// Create an empty directory "docs" in the current working directory
	if err = os.Mkdir("docs", 0750); err != nil {
		panic(err)
	}

	// Create an empty file "output.txt" in the root filesystem
	fd, err = os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	defer fd.Close()

	// Create an empty directory "docs" in the root filesystem
	if err = os.Mkdir("/docs", 0750); err != nil {
		panic(err)
	}
}
