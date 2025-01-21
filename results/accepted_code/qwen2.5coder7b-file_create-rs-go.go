package main

import (
	"fmt"
	"os"
)

const fileName string = "output.txt"
const dirName string = "docs"

func main() {
	create(".", "")
	create("/", "")
}

func create(root, subroot string) {
	fPath := root + "/" + subroot + "/" + fileName
	dPath := root + "/" + subroot + "/" + dirName

	if err := os.MkdirAll(dPath, 0755); err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}

	f, err := os.Create(fPath)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(1)
	}
	defer f.Close()
}
