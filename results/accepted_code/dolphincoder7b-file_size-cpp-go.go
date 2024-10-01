package main

import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	fi, err := os.Stat(filename)
	if err != nil {
		fmt.Fprintf(os.Stderr, "%v\n", err)
		return
	}

	fmt.Printf("Size of file %s is %d bytes.\n", filename, fi.Size())
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
