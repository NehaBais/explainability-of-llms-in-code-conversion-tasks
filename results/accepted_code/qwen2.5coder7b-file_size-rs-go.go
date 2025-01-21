package main

import (
	"fmt"
	"os"
)

func checkFileSize(path string) {
	fileInfo, err := os.Stat(path)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error: %v\n", err)
		os.Exit(2)
	}

	fmt.Printf("Size of %s is %d bytes\n", path, fileInfo.Size())
}

func main() {
	if len(os.Args) < 2 {
		checkFileSize("./input.txt")
		checkFileSize("/")
		return
	}

	checkFileSize(os.Args[1])
}
