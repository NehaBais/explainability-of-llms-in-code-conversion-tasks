package main

import (
	"fmt"
	"os"
)

// createFile creates an empty file with size 0 bytes at specified path.
func createFile(path string) error {
	file, err := os.Create(path)
	if err != nil {
		return err
	}
	defer file.Close()
	return nil
}

// createDirectory creates an empty directory at specified path.
func createDirectory(path string) error {
	err := os.MkdirAll(path, 0755)
	return err
}

func main() {
	// Create file in current directory
	if err := createFile("output.txt"); err != nil {
		fmt.Println("Error creating output file:", err)
	} else {
		fmt.Println("Output file created.")
	}

	// Create directory in current directory
	if err := createDirectory("docs"); err != nil {
		fmt.Println("Error creating docs directory:", err)
	} else {
		fmt.Println("Docs directory created.")
	}

	// Create file in root directory
	if err := createFile("/output.txt"); err != nil {
		fmt.Println("Error creating root output file:", err)
	} else {
		fmt.Println("Root output file created.")
	}

	// Create directory in root directory
	if err := createDirectory("/docs"); err != nil {
		fmt.Println("Error creating root docs directory:", err)
	} else {
		fmt.Println("Root docs directory created.")
	}
}
