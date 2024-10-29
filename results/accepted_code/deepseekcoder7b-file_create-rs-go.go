package main

import (
	"fmt"
	"os"
)

const (
	fileName = "output.txt"
	dirName  = "docs"
)

func main() {
	err := create(".")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}

	err = create("/")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}
}

func create(root string) error {
	filePath := fmt.Sprintf("%s/%s", root, fileName)
	dirPath := fmt.Sprintf("%s/%s", root, dirName)
	err := os.MkdirAll(dirPath, 0755)
	if err != nil {
		return err
	}
	_, err = os.Create(filePath)
	return err
}
