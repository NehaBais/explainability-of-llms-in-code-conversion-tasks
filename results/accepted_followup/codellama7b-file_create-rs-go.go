package main

import (
	"os"
	"path/filepath"
)

const FILE_NAME = "output.txt"
const DIR_NAME = "docs"

func main() {
	err := create(".").and(create("/"))
	if err != nil {
		panic(err)
	}
}

func create(root string) error {
	f, err := os.Create(filepath.Join(root, FILE_NAME))
	if err != nil {
		return err
	}
	defer f.Close()

	err = os.MkdirAll(filepath.Join(root, DIR_NAME), 0755)
	if err != nil {
		return err
	}

	_, err = f.WriteString("")
	return err
}
