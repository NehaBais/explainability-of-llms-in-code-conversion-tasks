package main

import (
	"os"
)

func main() {
	// Create an empty file called output.txt in the current working directory
	err := os.WriteFile("output.txt", []byte{}, 0644)
	if err != nil {
		panic(err)
	}

	// Create an empty file called output.txt at the filesystem root
	err = os.WriteFile("/output.txt", []byte{}, 0644)
	if err != nil {
		panic(err)
	}

	// Create an empty directory called docs in the current working directory
	err = os.Mkdir("docs", 0755)
	if err != nil {
		panic(err)
	}

	// Create an empty directory called docs at the filesystem root
	err = os.Mkdir("/docs", 0755)
	if err != nil {
		panic(err)
	}
}
