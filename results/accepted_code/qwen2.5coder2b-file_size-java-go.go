package main

import (
	"fmt"
	"io/ioutil"
)

func main() {
	// Define file names
	fileA := "file.txt"
	fileB := "/file.txt"

	// Get size of the file in current working directory
	file, err := ioutil.ReadFile(fileA)
	if err != nil {
		fmt.Println("Error reading file:", err)
		return
	}
	fmt.Printf("%d bytes\n", len(file))

	// Get size of the file in root directory
	file, err = ioutil.ReadFile(fileB)
	if err != nil {
		fmt.Println("Error reading file:", err)
		return
	}
	fmt.Printf("%d bytes\n", len(file))
}
