package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	// Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This should be done twice: once "here", i.e. in the current working directory and once in the filesystem root.
	err := os.Mkdir("docs", 0755)
	if err != nil {
		fmt.Println(err)
	}
	err = os.Create("output.txt")
	if err != nil {
		fmt.Println(err)
	}
	root, err := filepath.Abs("/")
	if err != nil {
		fmt.Println(err)
	}
	err = os.MkdirAll(filepath.Join(root, "docs"), 0755)
	if err != nil {
		fmt.Println(err)
	}
	err = os.Create(filepath.Join(root, "output.txt"))
	if err != nil {
		fmt.Println(err)
	}
}
