package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	file, err := os.Open("input.txt")
	if err != nil {
		if err == nil && err.Type() == os.ErrNotExist {
			fmt.Printf("File 'input.txt' does not exist\n")
		} else if err != nil {
			fmt.Printf("Cannot open file: %v\n", err)
			os.Exit(1)
		}
	}

	info, _ := file.Fstat()  // retrieves information about the file such as its size
	size := info.Size / 1024 // converting size to kb

	fmt.Printf("File 'input.txt' is %d bytes\n", size)
}
