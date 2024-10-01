package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func printFileSize(filename string) {
	if _, err := os.Stat(filename); err != nil {
		panic(err)
	} else {
		info := filepath.Dir(filename) + "/" + filename
		size, err := os.Stat(info).Size()
		if err != nil {
			panic(err)
		}
		fmt.Printf("Size of file %s is %d bytes.\n", info, size)
	}
}

func main() {
	printFileSize("input.txt")
	printFileSize(filepath.Abs("/input.txt"))
}
