package main

import (
	"fmt"
	"os"
)

func getFileSize(filename string) {
	if _, err := os.Stat(filename); err == nil {
		fmt.Printf("Size of file %s is %d bytes.
", filename, os.Size(filename))
	} else if os.IsNotExist(err) {
		fmt.Println(err)
	} else {
		fmt.Printf("Error occurred while getting size: %v
", err)
	}
}

func main() {
	getFileSize("input.txt")
	getFileSize("/input.txt")
}