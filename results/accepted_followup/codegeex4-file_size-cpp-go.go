package main

import (
	"fmt"
	"os"
)

func printFileSize(filename string) {
	file, err := os.Open(filename)
	if err != nil {
		fmt.Println(err)
		return
	}
	defer file.Close()

	fi, err := file.Stat()
	if err != nil {
		fmt.Println(err)
		return
	}

	size := fi.Size()
	fmt.Printf("Size of file %s is %d bytes\n", filename, size)
}

func main() {
	printFileSize("input.txt")
	printFileSize("/input.txt")
}
