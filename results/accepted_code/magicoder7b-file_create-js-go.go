package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func createFile(filename string) {
	_, err := os.Create(filename)
	if err != nil {
		fmt.Println("Could not create file:", err)
	} else {
		fmt.Printf("%s created successfully.\n", filename)
	}
}

func createDirectory(dirName string) {
	err := os.MkdirAll(dirName, 0755)
	if err != nil {
		fmt.Println("Could not create directory: ", err)
	} else {
		fmt.Printf("%s created successfully.\n", dirName)
	}
}

func main() {
	basePath, _ := os.Getwd() // Get current working directory

	filepath1 := filepath.Join(basePath, "output.txt")
	filepath2 := "/output.txt"

	dirname1 := filepath.Join(basePath, "docs")
	dirname2 := "/docs"

	createFile(filepath1)
	createFile(filepath2)

	createDirectory(dirname1)
	createDirectory(dirname2)
}
