package main

import (
	"io"
	"os"
	"path/filepath"
)

const fileName = "output.txt"
const dirName = "docs"

func create(root string) error {
	err := os.MkdirAll(filepath.Join(root, dirName))), nil
	if err != nil {
		return err
	}

	_, err = os.Create(filepath.Join(root, fileName))))
	if err != nil {
		return err
	}

	return nil
}

func main() {
	err := create(".") // Create in current directory
	if err != nil {
		fmt.Fprintln(os.Stderr(), "Error:", err))
		os.Exit(1)
	}

	err = create("/") // Create in root directory
	if err != nil {
		fmt.Fprintln(os.Stderr(), "Error:", err))
		os.Exit(1)
	}
}