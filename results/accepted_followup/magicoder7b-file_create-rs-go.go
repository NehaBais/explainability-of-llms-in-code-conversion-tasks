package main

import (
	"errors"
	"io/ioutil"
	"os"
	"path/filepath"
)

const file = "output.txt"
const dir = "docs"

func main() {
	err := create(".")
	if err != nil {
		log.Fatal(err)
	}

	err = create("/")
	if err != nil {
		log.Fatal(err)
	}
}

func create(root string) error {
	filePath := filepath.Join(root, file)
	dirPath := filepath.Join(root, dir)

	// Create an empty file
	_, err1 := os.Create(filePath)
	if err1 != nil {
		return errors.New("Cannot create a file " + err1.Error())
	}

	// Create an empty directory
	err2 := os.MkdirAll(dirPath, 0755)
	if err2 != nil {
		return errors.New("Cannot create a dir " + err2.Error())
	}

	return nil
}
