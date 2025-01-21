package main

import (
	"fmt"
	"os"
)

const FILE_NAME string = "output.txt"
const DIR_NAME string = "docs"

func create(root string) (err error) {
	filePath := root + "/" + FILE_NAME
	dirPath := root + "/" + DIR_NAME

	err = os.Mkdir(dirPath, 0755)
	if err != nil && !os.IsExist(err) {
		return fmt.Errorf("failed to create directory: %v", err)
	}

	err = os.Create(filePath)
	if err != nil {
		return fmt.Errorf("failed to create file: %v", err)
	}

	return
}

func main() {
	err := create(".")
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(1)
	}

	err = create("/")
	if err != nil {
		fmt.Println(err.Error())
		os.Exit(1)
	}
}
