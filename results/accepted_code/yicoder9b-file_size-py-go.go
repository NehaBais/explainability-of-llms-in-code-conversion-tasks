package main

import (
	"fmt"
	"os"
	"path/filepath"
)

func main() {
	info, err := os.Stat("input.txt")
	if err != nil {
		panic(err) // replace this with proper error handling
	}
	fmt.Println(info.Size())

	// If the file is in root directory of your filesystem:
	absPath := filepath.Clean(filepath.Join("/", "input.txt"))
	infoRoot, err := os.Stat(absPath)
	if err != nil {
		panic(err) // replace this with proper error handling
	}
	fmt.Println(infoRoot.Size())
}
