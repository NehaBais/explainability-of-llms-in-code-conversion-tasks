package main

import (
	"os"
)

func main() {
	// Create file "output.txt" in current directory
	file, err := os.Create("output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create file "/output.txt" (should require root privileges or be ignored)
	file, err = os.Create("/output.txt")
	if err != nil {
		panic(err)
	}
	file.Close()

	// Create directory "docs" in current directory
	err = os.Mkdir("docs", 0755)
	if err != nil {
		panic(err)
	}

	// Create directory "/docs" (should require root privileges or be ignored)
	err = os.Mkdir("/docs", 0755)
	if err != nil {
		panic(err)
	}
}
