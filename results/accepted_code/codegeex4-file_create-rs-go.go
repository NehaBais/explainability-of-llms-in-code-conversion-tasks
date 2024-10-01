package main

import (
	"fmt"
	"os"
)

const FILE_NAME = "output.txt"
const DIR_NAME = "docs"

func create(root string) error {
	dir := root + "/" + DIR_NAME
	err := os.Mkdir(dir, 0755)
	if err != nil && !os.IsExist(err) {
		return err
	}
	filePath := root + "/" + FILE_NAME
	_, err = os.Create(filePath)
	return err
}

func main() {
	err := create(".")
	if err != nil {
		fmt.Println("Error: ", err)
		os.Exit(1)
	}
	err = create("/")
	if err != nil {
		fmt.Println("Error: ", err)
		os.Exit(1)
	}
}
