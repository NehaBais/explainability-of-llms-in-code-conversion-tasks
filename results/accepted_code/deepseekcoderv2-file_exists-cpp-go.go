package main

import (
	"fmt"
	"os"
)

func fileExists(path string) {
	fmt.Printf("%s: ", path)
	if _, err := os.Stat(path); os.IsNotExist(err) {
		fmt.Println("does not exist")
	} else if info, _ := os.Stat(path); info.IsDir() {
		fmt.Println("is a directory")
	} else {
		fmt.Printf("exists with a file size of %d bytes.\n", info.Size())
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists("docs/input.txt")
	fileExists("docs/zero_length.txt")
}
