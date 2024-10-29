package main

import (
	"errors"
	"fmt"
	"os"
	"path/filepath"
)

func mkdirp(path string) error {
	absPath, err := filepath.Abs(path)
	if err != nil {
		return errors.New("Failed to get the absolute path: " + err.Error())
	}

	// Check if directory already exists
	if _, err = os.Stat(absPath); !os.IsNotExist(err) {
		return nil // Directory exists, return successfully.
	}

	// Create parent directories recursively
	err = os.MkdirAll(path, os.ModePerm)
	if err != nil {
		return errors.New("Failed to create directory: " + err.Error())
	}

	return nil
}

func main() {
	fmt.Println(mkdirp("/path/to/dir")) // Replace with your desired path
}
