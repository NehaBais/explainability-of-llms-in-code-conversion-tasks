package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	// fileA in the current working directory "."
	name := "input.txt"
	fileA, err := os.Open(name)
	if err != nil {
		fmt.Printf("Unable to open %s: %v\n", name, err)
	} else {
		defer fileA.Close()
		info, _ := fileA.Stat()
		// Print file size in bytes
		fmt.Printf("%d B \n", info.Size())
	}

	// fileB in file system root "/"
	fileB, err := os.Open("/input.txt")
	if err != nil {
		fmt.Printf("Unable to open /input.txt: %v\n", err)
	} else {
		defer fileB.Close()
		info, _ := fileB.Stat()
		// Print file size in bytes
		fmt.Printf("%d B \n", info.Size())
	}
}
