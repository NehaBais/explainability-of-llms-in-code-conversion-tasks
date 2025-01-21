package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func create(root string) {
	dir := filepath.Join(root, "docs")
	file := filepath.Join(root, "output.txt")
	if err := os.MkdirAll(dir, 0750); err != nil {
		errorHandler(err)
	}
	if _, err := os.Create(file); err != nil {
		errorHandler(err)
	}
}
func errorHandler(e error) {
	fmt.Fprintf(os.Stderr, "%v\n", e)
	os.Exit(1)
}
func main() {
	create(".")
	create("/")
}
