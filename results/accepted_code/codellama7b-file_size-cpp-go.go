package main

import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	fi, err := os.Stat(filename)
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Printf("Size of file %s is %d bytes.", filename, fi.Size())
	}
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
