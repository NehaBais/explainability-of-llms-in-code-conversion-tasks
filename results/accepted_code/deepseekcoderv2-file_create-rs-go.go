package main

import (
	"fmt"
	"os"
)

const FILE_NAME = "output.txt"
const DIR_NAME = "docs"

func create(root string) error {
	// TODO: Handle errors returned by os.MkdirAll and os.Create
	if err := os.MkdirAll(filepath.Join(root, DIR_NAME), 0755); err != nil {
		return fmt.Errorf("failed to create directory: %w", err)
	}
	// TODO: Handle errors returned by os.Create and filepath.Join
	if _, err := os.Create(filepath.Join(root, FILE_NAME)); err != nil {
		return fmt.Errorf("failed to create file: %w", err)
	}
	return nil
}

func main() {
	// TODO: Handle errors returned by create and errorHandler
	if err := create("."); err != nil {
		errorHandler(err, 1)
	}
	if err := create("/"); err != nil {
		errorHandler(err, 2)
	}
}

func errorHandler(error error, code int) {
	fmt.Fprintf(os.Stderr, "Error: %v\n", error)
	os.Exit(code)
}
