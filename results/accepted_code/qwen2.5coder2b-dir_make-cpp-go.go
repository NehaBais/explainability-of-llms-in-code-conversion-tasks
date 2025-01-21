package main

import (
	"fmt"
	"os"
	"path/filepath"

func main() {
	args := os.Args
	if len(args) != 2 {
		fmt.Println("Usage: mkdir <path>")
		return
	}

	pathToCreate := args[1]
	if err := filepath.MkdirAll(pathToCreate, 0o755); err != nil {
		fmt.Printf("Couldn't create directory: %s\n", pathToCreate)
		return
	}
	fmt.Printf("Directory created successfully at: %s\n", pathToCreate)
}