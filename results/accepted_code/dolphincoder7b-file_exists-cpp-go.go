package main

import (
	"fmt"
	"io/fs"
	"os"
	"path/filepath"
	"strings"
)

func fileExists(name string) {
	name = strings.TrimSuffix(name, filepath.Ext(name))
	fmt.Printf("%s ", name)

	if _, err := os.Stat(name); err == nil {
		if fi, _ := os.Stat(name); fi != nil && !fi.IsDir() {
			fmt.Printf("exists with a file size of %d bytes.\n", fi.Size())
		} else {
			fmt.Println("is a directory")
		}
	} else {
		fmt.Println("does not exist")
	}
}

func main() {
	fileExists("input.txt")
	fileExists("zero_length.txt")
	fileExists(filepath.Join("docs", "input.txt"))
	fileExists(filepath.Join("docs", "zero_length.txt"))
}
