package main

import (
	"os"
)

func main() {
	// Create a new empty file called "output.txt" in the current working directory
	file, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create an empty directory called "docs" in the current working directory
	err = os.Mkdir("docs", 0750)
	if err != nil {
		panic(err)
	}
}
