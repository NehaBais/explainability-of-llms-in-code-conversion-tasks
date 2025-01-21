package main

import (
	"log"
	"os"
)

const fileName = "output.txt"
const dirName = "docs"

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
	filePath := root + fileName
	dirPath := root + dirName

	err := os.MkdirAll(dirPath, 0755)
	if err != nil {
		return err
	}

	file, err := os.Create(filePath)
	defer file.Close()
	if err != nil {
		return err
	}

	_, err = file.WriteString("")
	if err != nil {
		return err
	}

	return nil
}
