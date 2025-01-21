package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"path/filepath"
)

func fileExists(filename string, rootPath string) {
	var path = filepath.Join(rootPath, filename))

	if info, err := os.Stat(path); err == nil {
		fmt.Println(path))

		if info.IsDir() {
			fmt.Println(" is a directory"))
		} else {
			if size, err := ioutil.ReadFile(path); err == nil {
				fmt.Printf(" exists with a file size of %d bytes.\n", len(size)))
			}
		}
	} else {
		fmt.Println(" does not exist"))
	}
}

func main() {
	fileExists("input.txt", ".")
	fileExists("zero_length.txt", "docs")
	fileExists("docs/input.txt", "docs")
	fileExists("docs/zero_length.txt", "docs")
}