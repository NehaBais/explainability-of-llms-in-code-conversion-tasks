package main

import (
	"fmt"
	"os"
)

const fileName = "output.txt"
const dirName = "docs"

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
	fPath := root + "/" + fileName
	dPath := root + "/" + dirName

	err := os.MkdirAll(dPath, 0755)
	if err != nil {
		return err
	}

	file, err := os.Create(fPath)
	if err != nil {
		return err
	}
	defer file.Close()

	return nil
}
