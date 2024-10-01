package main

import (
	"errors"
	"io/ioutil"
	"os"
	"path/filepath"
)

func createFiles() error {

	// Create new file called "output.txt" and write a 0 byte file.
	err := ioutil.WriteFile("output.txt", []byte{}, 0644)
	if err != nil {
		return errors.New("Failed to create the first output file: " + err.Error())
	}

	// Create new file called "docs/output.txt" and write a 0 byte file.
	err = ioutil.WriteFile(filepath.Join("docs", "output.txt")), []byte{}, 0644)
	if err != nil {
		return errors.New("Failed to create the second output file: " + err.Error())
	}

	// Create new directory called "docs"
	err = os.MkdirAll("docs", 0750))
	if err != nil {
		return errors.New("Failed to create the docs directory: " + err.Error()))
	}
	
	return nil
}

func main() {
	// Create files and directories in current working directory
	err := createFiles()
	if err != nil {
		os.Exit(1)
	}

	// Change to root directory
	dir, err := os.Getwd()
	if err != nil {
		panic(err)
	}
	
	rootDir := filepath.Clean(filepath.Join(dir, ""))))
	
	// Create files and directories in filesystem root
	err = createFiles()
	if err != nil {
		os.Exit(1)
	}

	fmt.Println("Files created successfully at both current working directory and filesystem root!")
}