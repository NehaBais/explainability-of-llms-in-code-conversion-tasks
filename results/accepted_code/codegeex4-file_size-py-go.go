package main

import (
	"fmt"
	"log"
	"os"
)

func main() {
	currentDirSize, err := getFileSize("input.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Printf("Size of input.txt in current directory: %d bytes\n", currentDirSize)

	rootDirSize, err := getFileSize("/input.txt")
	if err != nil {
		log.Fatal(err)
	}
	fmt.Printf("Size of /input.txt in root directory: %d bytes\n", rootDirSize)
}

func getFileSize(filename string) (int64, error) {
	fileInfo, err := os.Stat(filename)
	if err != nil {
		return 0, err
	}
	return fileInfo.Size(), nil
}
