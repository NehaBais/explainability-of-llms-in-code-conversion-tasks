package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func exitErr(msg string, code int) {
	fmt.Fprintf(os.Stderr, "Error: %s\n", msg)
	os.Exit(code)
}

func main() {
	if len(os.Args) < 2 {
		exitErr("No file name supplied", 1)
	}

	fileName := os.Args[1]
	metadata, err := os.Stat(fileName)
	if err != nil {
		exitErr(err.Error(), 2)
	}

	fmt.Printf("Size of %s is %d bytes\n", filepath.Base(fileName), metadata.Size())
}
